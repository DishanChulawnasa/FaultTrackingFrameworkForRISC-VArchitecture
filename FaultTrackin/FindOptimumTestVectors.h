#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;


std::vector<std::string> inputVectors;

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

    std::vector<std::string> INTERVectors[500][50];
    std::vector<std::string> ZVectors[1000];

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


    int emptyZVectorIndex[1000]{};

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

        testVectors.insert(testVectors.end(), INTERVectors[emptyZVectorIndex[iterations] - 1][iterations].begin(), INTERVectors[emptyZVectorIndex[iterations] - 1][iterations].end());



        //    std::cout << "Z2:\n";
        //    for (const std::string& vector : ZVectors[iterations]) {
        //        std::cout << vector << "\n";
        //    }

    }
    const std::string outputFileName = "OptimumTestVectors.txt";
    std::ofstream outputFile(outputFileName);

    if (!outputFile.is_open()) {
        std::cerr << "Failed to open the file: " << outputFileName << std::endl;
        return 1; // Return an error code
    }

    for (const std::string& vector : testVectors) {
        outputFile << vector << "\n";
    }

    //std::cout << "TEST VECTORS\n";
    //for (const std::string& vector : testVectors) {
    //    std::cout << vector << "\n";
    //}

    return 0;
}

