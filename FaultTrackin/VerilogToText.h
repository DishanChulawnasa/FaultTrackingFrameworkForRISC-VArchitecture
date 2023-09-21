#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <regex>
#include "fileconv.h"
#include <msclr/marshal_cppstd.h>

using namespace std;

struct Gate {
    string type;
    string input1;
    string input2;
    string output;
};

struct Module {
    string name;
    vector<string> inputs;
    vector<string> outputs;
    vector<string> wires;
};

int finalSignalNumber = 0;
string inputVeilogFileDirectory;
string verilogToText;

int VeriToText() {
    ifstream inputFile(inputVeilogFileDirectory);

    // Check if the file is open
    //if (!inputFile.is_open()) {
    //    std::cerr << "Error opening the input file." << std::endl;
    //    return 1;
    //}

    string line;
    vector<Gate> gates;
    Gate currentGate;   
    Module currentModule;
    bool inModule = false;

    // Define counters for elements
    int gateNumber = 1;
    int signalNumber = 1;
    //int wireNumber = 1;

    // Maps to store element names and their corresponding numbers
    map<string, int> gateNumbers;
    map<string, int> signalNumbers;
    //std::map<std::string, int> wireNumbers;

    while (getline(inputFile, line)) {
        smatch match;
        // Skip lines starting with "(* src = "
        if (line.find("(* src = ") != string::npos) {
            continue;
        }

        // Check if this line defines a gate instance
        if (line.find("NOT") != string::npos || line.find("OR") != string::npos ||
            line.find("NAND") != string::npos || line.find("AND") != string::npos || line.find("NOR") != string::npos || line.find("XOR") != string::npos || line.find("BUF") != string::npos)
        {
            if (line.find("NOT") != string::npos)
            {
                currentGate.type = "INV";
            }
            else if (line.find("BUF") != string::npos)
            {
                currentGate.type = "BUF";
            }
            else if (line.find("OR") != string::npos)
            {
                currentGate.type = "OR";
            }
            else if (line.find("NAND") != string::npos)
            {
                currentGate.type = "NAND";
            }
            else if (line.find("NOR") != string::npos)
            {
                currentGate.type = "NOR";
            }
            else if (line.find("XOR") != string::npos)
            {
                currentGate.type = "XOR";
            }
            else if (line.find("AND") != string::npos)
            {
                currentGate.type = "AND";
            }
            if (inModule) {
                if (signalNumbers.find(currentGate.input1) != signalNumbers.end()) {
                    currentGate.input1 = "Signal" + std::to_string(signalNumbers[currentGate.input1]);
                }
                if (signalNumbers.find(currentGate.input2) != signalNumbers.end()) {
                    currentGate.input2 = "Signal" + std::to_string(signalNumbers[currentGate.input2]);
                }
                if (signalNumbers.find(currentGate.output) != signalNumbers.end()) {
                    currentGate.output = "Signal" + std::to_string(signalNumbers[currentGate.output]);
                }
                gateNumbers[currentGate.output] = gateNumber++;
            }
        }
        else if (regex_search(line, match, regex("\\.A\\(\\s*([^,)]+)\\s*\\)")))
        {
            currentGate.input1 = regex_replace(match[1].str(), regex("\\s+"), "");

            // else if (line.find(".A(") != std::string::npos)
            // {
            //     std::istringstream iss(line);
            //     iss.ignore(256, '.');
            //     iss.ignore(256, 'A');
            //     iss.ignore(256, '(');
            //     std::getline(iss, currentGate.input1, ')');
            if (inModule)
            {
                if (signalNumbers.find(currentGate.input1) != signalNumbers.end())
                {
                    currentGate.input1 = std::to_string(signalNumbers[currentGate.input1]);
                }
                signalNumbers[currentGate.input1] = signalNumber++;
            }
        }
        else if (regex_search(line, match, regex("\\.B\\(\\s*([^,)]+)\\s*\\)")))
        {
            currentGate.input2 = regex_replace(match[1].str(), regex("\\s+"), "");
            
            if (inModule)
            {
                if (signalNumbers.find(currentGate.input2) != signalNumbers.end())
                {
                    currentGate.input2 = to_string(signalNumbers[currentGate.input2]);
                }
                signalNumbers[currentGate.input2] = signalNumber++;
            }
        }
        else if (regex_search(line, match, regex("\\.Y\\(\\s*([^,)]+)\\s*\\)")))
        {
            currentGate.output = regex_replace(match[1].str(), regex("\\s+"), "");
                       
            if (inModule)
            {
                if (signalNumbers.find(currentGate.output) != signalNumbers.end())
                {
                    currentGate.output = to_string(signalNumbers[currentGate.output]);
                }
                gateNumbers[currentGate.output] = gateNumber++;
            }
            gates.push_back(currentGate);
            currentGate = {};
        }
        else if (line.find("module ") != std::string::npos) {
            // Entering a new module
            inModule = true;
            currentModule.name = line.substr(line.find("module ") + 7, line.find("(") - line.find("module ") - 7);
        }
        else if (line.find("input ") != std::string::npos && inModule) {
            std::string inputName = line.substr(line.find("input ") + 6, line.find(";") - line.find("input ") - 6);
            currentModule.inputs.push_back(inputName);
            if (signalNumbers.find(inputName) != signalNumbers.end()) {
                inputName = std::to_string(signalNumbers[inputName]);
            }
            signalNumbers[inputName] = signalNumber++;
        }
        else if (line.find("output ") != std::string::npos && inModule) {
            std::string outputName = line.substr(line.find("output ") + 7, line.find(";") - line.find("output ") - 7);
            currentModule.outputs.push_back(outputName);
            if (signalNumbers.find(outputName) != signalNumbers.end()) {
                outputName = std::to_string(signalNumbers[outputName]);
            }
            signalNumbers[outputName] = signalNumber++;
        }
        else if (line.find("wire ") != std::string::npos && inModule) {
            std::string wireName = line.substr(line.find("wire ") + 5, line.find(";") - line.find("wire ") - 5);
            currentModule.wires.push_back(wireName);
            signalNumbers[wireName] = signalNumber++;
        }
    }

    // Closing the input file
    inputFile.close();

    //std::ostringstream veriToText;
    std::ofstream veriToText("Circuit.txt");

    // Print extracted gate information with numbers
    //std::cout << "Gate Information: " << std::endl;

    for (const auto& gate : gates) {
        veriToText << gate.type << " ";
        //std::cout << gate.type << " ";
        if (!gate.input2.empty()) {
            veriToText << gate.input1 << " ";
            veriToText << gate.input2 << " ";

            //std::cout << gate.input1 << " "; //input 1
            //std::cout << gate.input2 << " "; //input 2
        }
        else {
            veriToText << gate.input1 << " ";
            //std::cout << gate.input1 << " "; //for NOT Gate
        }

        veriToText << gate.output;
        //std::cout << gate.output << " " << std::endl; //output
        veriToText << "\n";
        //std::cout << std::endl;
    }


    // print input and outputs
    veriToText << "INPUT ";
    //std::cout << "INPUT ";
    for (const auto& input : currentModule.inputs) {
        int currentSignalNumberIn = signalNumbers[input];
        veriToText << " " << signalNumbers[input];
        finalSignalNumber = currentSignalNumberIn;
        //std::cout << " " << signalNumbers[input];
    }
    veriToText << " -1" ;
    //std::cout << " -1";
   
    veriToText << "\nOUTPUT ";
    //std::cout << "\nOUTPUT ";
    for (const auto& output : currentModule.outputs) {
        int currentSignalNUmberOut = signalNumbers[output];
        veriToText << " " << signalNumbers[output];
        //std::cout << " " << signalNumbers[output];
        if (finalSignalNumber < currentSignalNUmberOut)
            finalSignalNumber = currentSignalNUmberOut;
    }
    veriToText << " -1";
    //std::cout << " -1" << std::endl;
    
    //std::cout << "Wires: ";
    //for (const auto& wire : currentModule.wires) {
    //    std::cout << wire << "(" << signalNumbers[wire] << ") ";
    //}
    //std::cout << std::endl;

    //verilogToText = veriToText.str();
    
    return 0;
}