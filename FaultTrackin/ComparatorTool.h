#pragma once
#include <iostream>
#include <fstream>
#include <string>

std::string faultfreefile;
std::string faultyfile;
int faultDetectResult = 0;
int checkfiles = 0;
int checkfiles2 = 0;

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


    if (areFilesEqual(faultfreefile, faultyfile)) {
        faultDetectResult = 2;
    }
    else {
        faultDetectResult = 1;
    }

    return 0;
}