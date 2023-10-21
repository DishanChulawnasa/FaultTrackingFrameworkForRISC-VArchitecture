#pragma once
#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "fileconv.h"
#include "podem.h"
#include "GenerateFaultNodesVector.h"

using namespace std;




void divideAndWriteToFile(const vector<string>& inputVector, int elementsPerLine, const std::string& outputFile)
{
    if (elementsPerLine <= 0)
    {
        //cout << "Invalid number of elements per line. Must be greater than 0." << endl;
        return;
    }

    ofstream outFile(outputFile);

    if (!outFile.is_open())
    {
        //err << "Failed to open the output file." << endl;
        return;
    }

    for (int i = 0; i < inputVector.size(); i++)
    {
        outFile << inputVector[i];

        if ((i + 1) % elementsPerLine == 0 || i == inputVector.size() - 1)
        {
            outFile << endl;
        }
    }

    outFile.close();
}

int TestVectorsGen() {

    P_func.readFile();
    vector<int> faultsVector;
    string filename = "faultnodes.txt";

    faultsVector = ReadUniqueIntegersFromFile(filename);
    for (int value = 0; value <= 1; value++) {
        for (size_t i = 0; i < faultsVector.size(); i++)
        {

            Fault.nodeNumber = faultsVector[i];


            Fault.nodeValue = value;

            P_func.setX();
            P_func.PODEM();

            status = 0;

            for (int i = 1; i < node.size(); i++)
            {
                node.at(i).nodeFlag = 0;
                node.at(i).faultFlag = 0;
            }

            for (int i = 0; i < gate.size(); i++)
            {
                gate.at(i).gateFlag = 0;
            }

            faultActFlag = 0;
        }
    }

   // std::ostringstream outputtestvec;
    const string outputtestvec = "TestVectors.txt";

    divideAndWriteToFile(testvector, PINodes.size(), outputtestvec);


	return 0;
}
