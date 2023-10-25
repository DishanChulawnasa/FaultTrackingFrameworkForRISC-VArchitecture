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
#include "GenerateTextVectors.h"
#include "FindOptimumTestVectors.h"

using namespace std;
vector<int> faultsVector1;
vector<int> stkfaults1;

bool containsOnly01(const std::vector<int>& intVector) {
    for (int num : intVector) {
        if (num != 0 && num != 1) {
            return false; // Found a number other than 0 and 1
        }
    }
    return true; // All numbers in the vector are 0 or 1
}

void DeleteTextfiles() {
    if (remove("OptimumTestVectors.txt") == 0)
    {
       // cout << "Deleted successfully" << endl;
    }
    else
    {
        // cout << "Not deleted";
    }
    if (remove("selectedfaultnodes.txt") == 0)
    {
        // cout << "Deleted successfully" << endl;
    }
    else
    {
        // cout << "Not deleted";
    }
   // if (remove("TestVectors.txt") == 0)
    //{
        // cout << "Deleted successfully" << endl;
    //}
    //else
    {
        // cout << "Not deleted";
    }
    if (remove("selectedfaultnodes.txt") == 0)
    {
        // cout << "Deleted successfully" << endl;
    }
    else
    {
        // cout << "Not deleted";
    }

}

void clearfilesSelectedGenerateTestVector() {
    faultsVector.clear();

    stkfaults1.clear();
    faultsVector1.clear();
    inputVectors.clear();
    testVectors.clear();
    
    uniqueStrings.clear();
    resulttestvectors.clear();
    std::ofstream outputFile;
    outputFile.clear();
    std::ofstream outFile;
    outFile.clear();
    
    for (int i = 0; i < 500; i++) {
        for (int j = 0; j < 50; j++) {
            INTERVectors[i][j].clear();
        }
    }

    for (int i = 0; i < 1000; i++) {
        ZVectors[i].clear();
    }

    std::fill(emptyZVectorIndex, emptyZVectorIndex + 1000, 0);
}

int TestVectorsGenSelected() {
    
    P_func.readFile();
    
    string filename2 = "selectedfaultnodes.txt";
    string filename3 = "selectedSTKfaults.txt";


    stkfaults1 = ReadUniqueIntegersFromFile(filename3);
    faultsVector1 = ReadUniqueIntegersFromFile(filename2);

    if (containsOnly01(stkfaults1)) {
        if (faultsVector1.size() == stkfaults1.size()) {

            for (size_t i = 0; i < faultsVector1.size(); i++)
            {

                Fault.nodeNumber = faultsVector1[i];


                    Fault.nodeValue = stkfaults1[i];

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

         // std::ostringstream outputtestvec;
            const string outputtestvec2 = "TestVectors.txt";
            divideAndWriteToFile(testvector, PINodes.size(), outputtestvec2);
                        

        }
        else  {
            ShowErrorMessage("Error: Faulty Nodes Vector Length and Stuck-at Faults Vector Length are not Equal!");

        }
    }
    else {
        ShowErrorMessage("Error: Stuck-at Faults should be enterd as '0' or '1'!");
    }
    return 0;
}