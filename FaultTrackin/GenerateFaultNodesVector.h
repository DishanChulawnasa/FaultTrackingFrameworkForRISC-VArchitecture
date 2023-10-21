#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <vector>
#include <cstdio>
#include <regex>
#include <algorithm>
#include <set>
#include <random>
#include <cstdio>
#include "fileconv.h"

using namespace std;
string inputYosysFile;

void numberNodes(const string& inputFileName,
    map<string, int>& inputNodes,
    map<string, int>& outputNodes,
    map<string, int>& wireNodes)
{

    int count = 1;

    ifstream inputFile(inputFileName);

    if (!inputFile.is_open())
    {
        //ShowErrorMessage("Error: Could not open the input file.");
        //cerr << "Error: Could not open the input file." << endl;
        return;
    }

    string line;

    while (getline(inputFile, line))
    {
        // Use regular expressions to match input, output, and wire declarations
        smatch match;

        // Match input declarations (e.g., input [7:0] A, B, C;)
        if (regex_search(line, match, regex(R"(input\s*(?:\[\d+(?::\d+)?\])?\s*([^,;]+)\s*[,;])")))
        {
            string inputDeclaration = match[1];
            // Split the declaration into individual names
            regex wordRegex(R"((?:\\?\w+(?:\[\d+(?::\d+)?\])*(?:\[\d+(?::\d+)?\])?)+)"); // Capture signal names with escape characters and array indices
            sregex_iterator wordIterator(inputDeclaration.begin(), inputDeclaration.end(), wordRegex);
            sregex_iterator end;
            for (; wordIterator != end; ++wordIterator)
            {
                // inputPorts.push_back(wordIterator->str());
                string input = wordIterator->str();
                inputNodes[input] = count++;
            }
        }

        // Match output declarations (e.g., output [3:0] X, Y, Z;)
        if (regex_search(line, match, regex(R"(output\s*(?:\[\d+(?::\d+)?\])?\s*([^,;]+)\s*[,;])")))
        {
            string outputDeclaration = match[1];
            // Split the declaration into individual names
            regex wordRegex(R"((?:\\?\w+(?:\[\d+(?::\d+)?\])*(?:\[\d+(?::\d+)?\])?)+)"); // Capture signal names with escape characters and array indices
            sregex_iterator wordIterator(outputDeclaration.begin(), outputDeclaration.end(), wordRegex);
            sregex_iterator end;
            for (; wordIterator != end; ++wordIterator)
            {
                // outputPorts.push_back(wordIterator->str());
                string output = wordIterator->str();
                outputNodes[output] = count++;
            }
        }

        // Match wire declarations (e.g., wire W, X, Y, Z;)
        if (regex_search(line, match, regex(R"(wire\s*(?:\[\d+(?::\d+)?\])?\s*([^,;]+)\s*[,;])")))
        {
            string wireDeclaration = match[1];
            // Split the declaration into individual names
            regex wordRegex(R"((?:\\?\w+(?:\[\d+(?::\d+)?\])*(?:\[\d+(?::\d+)?\])?)+)"); // Capture signal names with escape characters and array indices
            sregex_iterator wordIterator(wireDeclaration.begin(), wireDeclaration.end(), wordRegex);
            sregex_iterator end;
            for (; wordIterator != end; ++wordIterator)
            {
                // wireNames.push_back(wordIterator->str());
                string wire = wordIterator->str();
                wireNodes[wire] = count++;
            }
        }
    }

    // Close input file
    inputFile.close();
}

vector<int> ReadUniqueIntegersFromFile(const string& filename)
{
    vector<int> intVector;

    ifstream inputFile(filename);

    if (!inputFile.is_open())
    {
       // ShowErrorMessage("Failed to open the file.");
      // cerr << "Failed to open the file." << endl;
        return intVector; // Return an empty vector in case of an error
    }

    string line;

    while (getline(inputFile, line))
    {
        int value = atoi(line.c_str());
        intVector.push_back(value);
    }

    inputFile.close();

    return intVector;
}

void ShowErrorMessage(const std::string& message) {
    System::Windows::Forms::MessageBox::Show(gcnew System::String(message.c_str()),
        "Error", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
}

int faultNodesVectorGeneration() {


    map<string, int> inputNodes;
    map<string, int> outputNodes;
    map<string, int> wireNodes;
    vector<int> inputs;
    vector<int> outputs;
    vector<int> wires;
    vector<int> allNodes;
   
    //inputYosysFile = "MUX32_Syn.v"; 
    //std::ifstream inputYosysFile("MUX32_Syn.v");
    std::ofstream output2("faultnodes.txt");
    std::ofstream outputAllNodes("temporaryfaultnodes.txt");
    std::ofstream output3("faultnodestempory.txt");
    numberNodes("InsertedScanChainFile.v", inputNodes, outputNodes, wireNodes);

    map<string, int>::iterator itr;
    for (itr = inputNodes.begin(); itr != inputNodes.end(); itr++)
    {
        inputs.push_back(itr->second);
    }

    for (itr = outputNodes.begin(); itr != outputNodes.end(); itr++)
    {
        //cout << itr->first << " " << itr->second << endl;
        outputs.push_back(itr->second);
    }

    for (itr = wireNodes.begin(); itr != wireNodes.end(); itr++)
    {
        //cout << itr->first << " " << itr->second << endl;
        wires.push_back(itr->second);
    }

    allNodes.insert(allNodes.end(), inputs.begin(), inputs.end());
    allNodes.insert(allNodes.end(), inputs.begin(), inputs.end());
    allNodes.insert(allNodes.end(), wires.begin(), wires.end());

    if (!outputAllNodes.is_open())
    {
        ShowErrorMessage("Error: Could not create the output file.");
        //cerr << "Error: Could not create the output file." << endl;
        return 1;
    }

    for (const auto& i : allNodes)
    {
        outputAllNodes << i << endl;
    }

    outputAllNodes.close();

    vector<int> uniqueIntegers = ReadUniqueIntegersFromFile("temporaryfaultnodes.txt");

    // Use a set to remove duplicates
    set<int> uniqueInts(uniqueIntegers.begin(), uniqueIntegers.end());

    vector<int> faultsVector(uniqueInts.begin(), uniqueInts.end());

    if (!output2.is_open())
    {
        ShowErrorMessage("Error: Could not create the output file.");
        //cerr << "Error: Could not create the output file." << endl;
        return 1;
    }

    for (const auto& i : faultsVector)
    {
        output2 << i << endl;
    }

    if (!output3.is_open())
    {
        ShowErrorMessage("Error: Could not create the output file.");
        //cerr << "Error: Could not create the output file." << endl;
        return 1;
    }

    for (const auto& i : faultsVector)
    {
        output3 << i << "  ";
    }

    output3.close();
    
    if (remove("temporaryfaultnodes.txt") == 0)
    {
       // ShowErrorMessage("Temporary Files Deleted successfully");
        //cout << "Deleted successfully" << endl;
    }
    else
    {
     //   ShowErrorMessage("Temporary Files Not Deleted");
       // ShowErrorMessage("Error: Could not create the output file.");
        //cout << "Not deleted";
    }

    return 0;
}