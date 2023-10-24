#pragma once
#include <iostream>
#include <fstream>
#include <string>

bool areFilesEqual(const std::string& filename1, const std::string& filename2) {
    std::ifstream file1(filename1);
    std::ifstream file2(filename2);

    if (!file1.is_open() || !file2.is_open()) {
        std::cerr << "Unable to open one or both files." << std::endl;
        return false;
    }

    std::string line1, line2;
    while (getline(file1, line1) && getline(file2, line2)) {
        if (line1 != line2) {
            return false;
        }
    }

    // Check if one file has more lines than the other
    if (file1.eof() != file2.eof()) {
        return false;
    }

    return true;
}

int CompareModules() {
    std::string faultfreefile = "ADDER.txt"; // Replace with the actual filename of your first text file
    std::string faultyfile = "ADDERF2.txt"; // Replace with the actual filename of your second text file

    if (areFilesEqual(faultfreefile, faultyfile)) {
        std::cout << "The files are equal." << std::endl;
    }
    else {
        std::cout << "The files are not equal." << std::endl;
    }

    return 0;
}