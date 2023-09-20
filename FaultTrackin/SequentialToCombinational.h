#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>
#include <algorithm>

using namespace std;

// Struct to store flip-flop signals
struct FlipFlopSignals
{
    string clock;
    string data;
    string qOutput;
};

string inputSequentialFileDirectory;

//Extract Module Name
string extractModuleName(const string& line)
{
    smatch match;
    if (regex_search(line, match, regex("module\\s+([^\\s(]+)\\s*\\(")))
    {
        return match[1];
    }
    return "";
}

//Extract Verilog Names
void extractVerilogNames(const string& inputFileName,
    vector<string>& inputPorts,
    vector<string>& outputPorts,
    vector<string>& wireNames)
{
    ifstream inputFile(inputFileName);

    if (!inputFile.is_open())
    {
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
                inputPorts.push_back(wordIterator->str());
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
                outputPorts.push_back(wordIterator->str());
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
                wireNames.push_back(wordIterator->str());
            }
        }
    }

    // Close input file
    inputFile.close();
}

//Append and Remove
// Function to append unique items from vector2 to vector1
void appendAndRemoveDuplicates(std::vector<std::string>& vector1, const std::vector<std::string>& vector2)
{
    // Concatenate vector2 with vector1
    vector1.insert(vector1.end(), vector2.begin(), vector2.end());

    // Sort the combined vector
    std::sort(vector1.begin(), vector1.end());

    // Use std::unique to remove duplicate terms
    auto uniqueEnd = std::unique(vector1.begin(), vector1.end());

    // Resize vector1 to remove the duplicates
    vector1.resize(std::distance(vector1.begin(), uniqueEnd));
}

//Remove Common
// Function to remove common terms from vector1
void removeCommonTerms(std::vector<std::string>& vector1, const std::vector<std::string>& vector2)
{
    // Create a new vector to store the unique terms
    std::vector<std::string> uniqueTerms;

    // Iterate through vector1 and check if each term is in vector2
    for (const std::string& term : vector1)
    {
        if (std::find(vector2.begin(), vector2.end(), term) == vector2.end())
        {
            uniqueTerms.push_back(term);
        }
    }

    // Update vector1 with the unique terms
    vector1 = uniqueTerms;
}

//Extract Combinational
void extractCombinationalGates(const string& inputFileName, const string& outputFileName)
{
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName, ios_base::app);

    if (!inputFile.is_open())
    {
        //cerr << "Error: Could not open the input file." << endl;
        return;
    }

    if (!outputFile.is_open())
    {
        //cerr << "Error: Could not create the output file." << endl;
        return;
    }

    vector<string> lines;
    string line;
    bool startReading = false;   // Flag to indicate when to start reading
    bool insideDFFBlock = false; // Flag to indicate when inside a DFF block

    // Read input Verilog file line by line
    while (getline(inputFile, line))
    {
        // Check if the line contains "module" (indicating the module declaration)
        if (line.find("module") != string::npos)
        {
            // Skip module declaration
            startReading = false;
        }

        // Check if the line contains "input" or "output" (indicating ports)
        if (line.find("input") != string::npos || line.find("output") != string::npos || line.find("wire") != string::npos)
        {
            // Skip ports
        }

        // Check if the line contains "DFF" (indicating a D flip-flop gate)
        else if (line.find("DFF") != string::npos || line.find("DFFSR") != string::npos)
        {
            // Set the insideDFFBlock flag when entering a DFF block
            insideDFFBlock = true;
            // Skip the DFF line
            continue;
        }

        // Check if the line contains gates (e.g., "AND", "OR", "NAND", "NOR", "XOR")
        else if (line.find("AND") != string::npos || line.find("OR") != string::npos ||
            line.find("NAND") != string::npos || line.find("NOR") != string::npos ||
            line.find("XOR") != string::npos || line.find("NOT") != string::npos)
        {
            // Only start reading if not inside a DFF block
            if (!insideDFFBlock)
            {
                startReading = true; // Start reading from the first gate
            }
        }

        // Check if the line marks the end of a DFF block
        else if (insideDFFBlock && line.find(");") != string::npos)
        {
            insideDFFBlock = false; // Reset the insideDFFBlock flag
        }

        // Continue reading if the flag is set
        if (startReading)
        {
            // Pass through other lines without modification (combinational gates)
            outputFile << line << endl;

            // Check if the line ends with a semicolon and marks the end of a gate
            if (line.back() == ';')
            {
                startReading = false; // Stop reading after the gate
            }
        }
    }

    outputFile << "endmodule" << endl;
    // Close input file
    inputFile.close();

    // Close output file
    outputFile.close();
}

//Write Verilog Module
void writeVerilogModule(const string& moduleName, const vector<string>& inputs, const vector<string>& outputs, const vector<string>& wires, ofstream& outputFile)
{
    // Write module declaration
    outputFile << "module " << moduleName << " (" << endl;

    // Write input ports
    for (size_t i = 0; i < inputs.size(); ++i)
    {
        outputFile << inputs[i];
        if (i < inputs.size() - 1)
            outputFile << ", ";
        else if (!outputs.empty() || !wires.empty())
            outputFile << ","; // Add a comma if there are outputs or wires
        outputFile << endl;
    }

    // Write output ports
    for (size_t i = 0; i < outputs.size(); ++i)
    {
        outputFile << outputs[i];
        if (i < outputs.size() - 1)
            outputFile << ", ";
        // else if (!wires.empty())
        //     outputFile << ","; // Add a comma if there are wires
        outputFile << endl;
    }

    // Close module declaration
    outputFile << ");" << endl;

    // Write wire declarations
    for (size_t i = 0; i < wires.size(); ++i)
    {
        outputFile << "  wire " << wires[i] << ";" << endl;
    }
    for (size_t i = 0; i < inputs.size(); ++i)
    {
        outputFile << "  input " << inputs[i] << ";" << endl;
    }
    for (size_t i = 0; i < outputs.size(); ++i)
    {
        outputFile << "  output " << outputs[i] << ";" << endl;
    }

    // Close input file

    // outputFile.close();
}

int scanChainInsertion()
{
    // Define input and output file names
    const string outputFileName = "InsertedScanChainFile.v";   // Replace with the desired output Verilog file name

    ifstream inputFile(inputSequentialFileDirectory);
    ofstream outputFile(outputFileName);

    vector<string> lines;
    string line;

    bool insideDFFBlock = false;
    vector<FlipFlopSignals> flipFlops;

    FlipFlopSignals currentFlipFlop;

    string moduleName; // Store the module name

    // Read input Verilog file line by line
    while (getline(inputFile, line))
    {
        if (!insideDFFBlock)
        {
            // Check if the line declares a D flip-flop (DFF)
            if (line.find("DFF") != string::npos || line.find("DFFSR") != string::npos)
            {
                insideDFFBlock = true;

                // Initialize the current flip-flop
                currentFlipFlop.clock = "";
                currentFlipFlop.data = "";
                currentFlipFlop.qOutput = "";
            }
            else
            {
                // Pass through other lines without modification
                // outputFile << line << endl;

                // Extract the module name from the line
                if (moduleName.empty())
                {
                    moduleName = extractModuleName(line);
                }
            }
        }
        else
        {
            // Check if the current line contains the clock, data, or qOutput signal
            smatch match;
            if (regex_search(line, match, regex("\\.C\\(\\s*([^,)]+)\\s*\\)")))
            {
                currentFlipFlop.clock = regex_replace(match[1].str(), regex("\\s+"), "");
            }
            if (regex_search(line, match, regex("\\.D\\(\\s*([^,)]+)\\s*\\)")))
            {
                currentFlipFlop.data = regex_replace(match[1].str(), regex("\\s+"), "");
            }
            if (regex_search(line, match, regex("\\.Q\\(\\s*([^,)]+)\\s*\\)")))
            {
                currentFlipFlop.qOutput = regex_replace(match[1].str(), regex("\\s+"), "");
            }

            // Check for the closing parenthesis of the DFF block
            if (line.find(");") != string::npos)
            {
                insideDFFBlock = false;
                flipFlops.push_back(currentFlipFlop);
            }
        }
    }

    // Close input file
    // inputFile.close();

    // Close output file
    // outputFile.close();

    vector<string> inputPorts;
    vector<string> outputPorts;
    vector<string> wireNames;

    extractVerilogNames(inputSequentialFileDirectory, inputPorts, outputPorts, wireNames);

    // Print extracted names
    // cout << "Input Ports:" << endl;
    // for (const string &inputPort : inputPorts)
    // {
    //     cout << "  " << inputPort << endl;
    // }

    // cout << "Output Ports:" << endl;
    // for (const string &outputPort : outputPorts)
    // {
    //     cout << "  " << outputPort << endl;
    // }

    // cout << "Wire Names:" << endl;
    // for (const string &wireName : wireNames)
    // {
    //     cout << "  " << wireName << endl;
    // }

    vector<string> qOutputVector;
    vector<string> dataVector;

    for (const FlipFlopSignals& flipFlop : flipFlops)
    {
        qOutputVector.push_back(flipFlop.qOutput);
    }

    for (const FlipFlopSignals& flipFlop : flipFlops)
    {
        dataVector.push_back(flipFlop.data);
    }

    // vector<string> vector1 = {"apple", "banana", "cherry"};
    // vector<string> vector2 = {"cherry", "date", "grape"};

    // Call the function to append unique items from vector2 to vector1
    appendAndRemoveDuplicates(inputPorts, qOutputVector);
    appendAndRemoveDuplicates(outputPorts, dataVector);
    // removeCommonTerms(inputPorts, outputPorts);
    removeCommonTerms(outputPorts, inputPorts);
    removeCommonTerms(wireNames, inputPorts);
    removeCommonTerms(wireNames, outputPorts);

    // Print the modified vector1
    // cout
    //     << "Modified inputs:" << endl;
    // for (const string &term : inputPorts)
    // {
    //     cout << term << endl;
    // }
    // cout << endl;

    // cout
    //     << "Modified outputs:" << endl;
    // for (const string &term : outputPorts)
    // {
    //     cout << term << endl;
    // }
    // cout << endl;
    // cout
    //     << "Modified wires:" << endl;
    // for (const string &term : wireNames)
    // {
    //     cout << term << endl;
    // }
    // cout << endl;

    // Function to write Verilog module declaration and signals to a file
    writeVerilogModule(moduleName, inputPorts, outputPorts, wireNames, outputFile);
    extractCombinationalGates(inputSequentialFileDirectory, outputFileName);
    // const string inputFileName = "counter_syn.v"; // Replace with your input Verilog file name

    return 0;
}

