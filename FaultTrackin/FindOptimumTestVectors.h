#pragma once
#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <fstream>

using namespace std;


std::vector<std::string> inputVectors;
std::vector<std::string> testVectors;
std::vector<std::string> INTERVectors[500][50];
std::vector<std::string> ZVectors[1000];
std::set<std::string> uniqueStrings;
std::vector<std::string> resulttestvectors;
int emptyZVectorIndex[1000]{};
int emptyZVector = 0;

void performComparisons(const std::vector<std::string>& inputVectors, std::vector<std::string>& INTERVectors, std::vector<std::string>& ZVectors) {
    int count = 0;
    int countk = 0;
    for (int j = 1; j < inputVectors.size(); ++j) {

        std::string output(inputVectors[0].size(), 'x');

        for (size_t i = 0; i < inputVectors[0].size(); ++i) {
            if (inputVectors[0][i] == '1' && inputVectors[j][i] == '1') {
                output[i] = '1';
            }
            else if (inputVectors[0][i] == '0' && inputVectors[j][i] == '0') {
                output[i] = '0';
            }
            else if (inputVectors[0][i] == 'x' && inputVectors[j][i] == 'x') {
                output[i] = 'x';
            }
            else if (inputVectors[0][i] == '1' && inputVectors[j][i] == 'x') {
                output[i] = '1';
            }
            else if (inputVectors[0][i] == 'x' && inputVectors[j][i] == '1') {
                output[i] = '1';
            }
            else if (inputVectors[0][i] == '0' && inputVectors[j][i] == 'x') {
                output[i] = '0';
            }
            else if (inputVectors[0][i] == 'x' && inputVectors[j][i] == '0') {
                output[i] = '0';
            }
            else if (inputVectors[0][i] == '0' && inputVectors[j][i] == '1') {
                output[i] = 'z';
            }
            else if (inputVectors[0][i] == '1' && inputVectors[j][i] == '0') {
                output[i] = 'z';
            }
        }

        size_t pos = output.find('z');

        if (pos != std::string::npos) {
            ZVectors.push_back(inputVectors[j]);
            countk++;
        }
        else {
            INTERVectors.push_back(output);
            count++;
        }
        if (count == 0 && countk == 1) {
            INTERVectors.insert(INTERVectors.end(), inputVectors[0]);
        }
    }

}

int FindOptimumVector() {

    std::vector<std::string> inputVectors;
    std::vector<std::string> testVectors;

    // Open the input file
    std::ifstream inputFile("TestVectors.txt");

    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            inputVectors.push_back(line);
        }
        inputFile.close();
    }
    else {
        std::cerr << "Failed to open the input file." << std::endl;
        return 1;
    }

    if (inputVectors.size() == 1) {
        const std::string outputFileName2 = "OptimumTestVectors.txt";
        std::ofstream outputFile2(outputFileName2);

        if (!outputFile2.is_open()) {
            std::cerr << "Failed to open the file: " << outputFileName2 << std::endl;
            return 1; // Return an error code
        }

        for (const std::string& vector : inputVectors) {
            outputFile2 << vector << "\n";
        }
        outputFile2.close();
    }
    else if (inputVectors.size() == 0) {
        std::string textToSave = "ATPG Failed! \n Can not Find Optimum Test Vector!!";
        const std::string outputFileName3 = "OptimumTestVectors.txt";
        std::ofstream outputFile3(outputFileName3);

        if (outputFile3.is_open()) {
            outputFile3 << textToSave << std::endl;
        }

        outputFile3.close();
    }
    else {

        performComparisons(inputVectors, INTERVectors[0][0], ZVectors[0]);
        int emptyINTERVectorIndex = 0;
        for (int i = 1; i <= 499; ++i) {
            performComparisons(INTERVectors[i - 1][0], INTERVectors[i][0], ZVectors[0]);
            if (INTERVectors[i][0].empty()) {
                emptyINTERVectorIndex = i;
                break;
            }
        }

        testVectors.insert(testVectors.end(), INTERVectors[emptyINTERVectorIndex - 1][0].begin(), INTERVectors[emptyINTERVectorIndex - 1][0].end());

        //  std::cout << "TEST VECTOR " << "\n";
        //  for (const std::string& vector : testVectors) {
        //      std::cout << vector << "\n";
        //  }

        //  std::cout << "Z1:\n";
        //  for (const std::string& vector : ZVectors[0]) {
        //      std::cout << vector << "\n";
        //  }



        for (int iterations = 1; iterations <= 49; ++iterations) {

            performComparisons(ZVectors[iterations - 1], INTERVectors[0][iterations], ZVectors[iterations]);
            //int emptyZVectorIndex = 0;
            for (int i = 1; i <= 499; ++i) {
                performComparisons(INTERVectors[i - 1][iterations], INTERVectors[i][iterations], ZVectors[iterations]);
                if (INTERVectors[i][iterations].empty()) {
                    emptyZVectorIndex[iterations] = i;
                    break;
                }
            }
            if (ZVectors[iterations].empty()) {
                emptyZVector = iterations;
                break;
            }

            testVectors.insert(testVectors.end(), INTERVectors[emptyZVectorIndex[iterations] - 1][iterations].begin(), INTERVectors[emptyZVectorIndex[iterations] - 1][iterations].end());



            //    std::cout << "Z2:\n";
            //    for (const std::string& vector : ZVectors[iterations]) {
            //        std::cout << vector << "\n";
            //    }

        }

        testVectors.insert(testVectors.end(), ZVectors[emptyZVector - 1].begin(), ZVectors[emptyZVector - 1].end());



        for (const std::string& str : testVectors) {
            if (uniqueStrings.find(str) == uniqueStrings.end()) {
                // This is a unique string, so we add it to the result vector and the set.
                uniqueStrings.insert(str);
                resulttestvectors.push_back(str);
            }
        }

        const std::string outputFileName = "OptimumTestVectors.txt";
        std::ofstream outputFile(outputFileName);

        if (!outputFile.is_open()) {
            std::cerr << "Failed to open the file: " << outputFileName << std::endl;
            return 1; // Return an error code
        }

        for (const std::string& vector : resulttestvectors) {
            outputFile << vector << "\n";
        }
        outputFile.close();
        //std::cout << "TEST VECTORS\n";
        //for (const std::string& vector : testVectors) {
        //    std::cout << vector << "\n";
        //}
    }

    return 0;
}

