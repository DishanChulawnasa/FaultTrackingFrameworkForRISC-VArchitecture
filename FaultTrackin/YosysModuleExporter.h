#pragma once
#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <locale>
#include <msclr/marshal_cppstd.h>


#include "fileconv.h"

string importYosysToolTemp;
string VerilogModulePath;
//std::wstring importYosysTool;

int YosysModuleExporter1() {
    SECURITY_ATTRIBUTES saAttr;
    HANDLE hChildStdinRead, hChildStdinWrite, hChildStdoutRead, hChildStdoutWrite;

    // Set up the security attributes for the pipe handles.
    saAttr.nLength = sizeof(SECURITY_ATTRIBUTES);
    saAttr.bInheritHandle = TRUE;
    saAttr.lpSecurityDescriptor = NULL;

    // Create pipes for standard input and output.
    if (!CreatePipe(&hChildStdinRead, &hChildStdinWrite, &saAttr, 0) ||
        !CreatePipe(&hChildStdoutRead, &hChildStdoutWrite, &saAttr, 0)) {
        //std::cerr << "Error creating pipes: " << GetLastError() << std::endl;
        return 1;
    }
    
    // Create a process to run Yosys.
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    ZeroMemory(&si, sizeof(STARTUPINFO));
    si.cb = sizeof(STARTUPINFO);
    si.hStdError = hChildStdoutWrite;
    si.hStdOutput = hChildStdoutWrite;
    si.hStdInput = hChildStdinRead;
    si.dwFlags |= STARTF_USESTDHANDLES;

    // Prompt the user for the batch file location
    int wideStrLength = MultiByteToWideChar(CP_UTF8, 0, importYosysToolTemp.c_str(), -1, NULL, 0);
    std::wstring importYosysTool(wideStrLength, L'\0');

    MultiByteToWideChar(CP_UTF8, 0, importYosysToolTemp.c_str(), -1, &importYosysTool[0], wideStrLength);
    std::wstring batchFileLocation = importYosysTool;
    //std::wcout << L"Enter the batch file location (e.g., D:/yosys/oss-cad-suite/start.bat): ";
    //std::wcin >> batchFileLocation;

    LPWSTR procDirec = const_cast<LPWSTR>(batchFileLocation.c_str());
   // LPWSTR procDirec = (LPWSTR)L"D:/yosys/oss-cad-suite/start.bat";

    if (CreateProcess(procDirec, NULL, NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi)) {
        // Prompt the user for a module name
       // std::string moduleName = VerilogModulePath;
          std::string moduleName = "ADDER";
          std::string savepath = "D:/SoftwareFrameWork/YosysOutputs/";
        //std::cout << "Enter the module name: ";
        //std::cin >> moduleName;

        // Send Yosys commands using the user-provided module name
        std::vector<std::string> commands = {
            "yosys\n",
            "read_verilog " + moduleName + ".v\n", // Use the module name
            "splitnets -ports\n",
            "read_verilog -lib cmos_cells.v\n",
            "synth\n",
            "dfflibmap -liberty cmos_cells.lib\n",
            "abc -liberty cmos_cells.lib\n",
            "opt_clean\n",
            "stat -liberty cmos_cells.lib\n",
            "write_verilog " + savepath + moduleName + "_synth.v\n",
            "exit\n",
            "exit\n"
        };

        for (const std::string& command : commands) {
            DWORD bytesWritten;
            if (!WriteFile(hChildStdinWrite, command.c_str(), command.size(), &bytesWritten, NULL)) {
                //std::cerr << "Error writing to pipe: " << GetLastError() << std::endl;
                break; // Exit the loop if a write error occurs
            }
        }

        // Close the write end of the input pipe to signal the end of input.
        CloseHandle(hChildStdinWrite);

        // Read and process output from Yosys
        for (int i = 0; i <= 21800; i++) {
            char buffer[2]{};
            DWORD bytesRead;
            if (ReadFile(hChildStdoutRead, buffer, sizeof(buffer) - 1, &bytesRead, NULL)) {
                //buffer[bytesRead] = '\0'; // Null-terminate the received data.
                std::cout << buffer; // Print Yosys output to the console
                //break;
            }
        }

        // Close handles and wait for the Yosys process to exit
        CloseHandle(hChildStdoutRead);
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);
    }
    else {
        //std::cerr << "Error creating Yosys process: " << GetLastError() << std::endl;
        return 1;
    }

    return 0;
}

