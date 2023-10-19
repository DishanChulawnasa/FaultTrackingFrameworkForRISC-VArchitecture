#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <locale>
#include <msclr/marshal_cppstd.h>
#include "fileconv.h"

std::string importYosysToolTemp;
std::string VerilogModulePath;
std::string selectedFolder;
std::string txtOutput;

void ShowErrorMessage(const std::string& message) {
    System::Windows::Forms::MessageBox::Show(gcnew System::String(message.c_str()),
        "Error", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
}

int YosysModuleExporter1() {
    SECURITY_ATTRIBUTES saAttr{};
    HANDLE hChildStdinRead, hChildStdinWrite, hChildStdoutRead, hChildStdoutWrite;

    saAttr.nLength = sizeof(SECURITY_ATTRIBUTES);
    saAttr.bInheritHandle = TRUE;
    saAttr.lpSecurityDescriptor = NULL;

    if (CreatePipe(&hChildStdinRead, &hChildStdinWrite, &saAttr, 0) &&
        CreatePipe(&hChildStdoutRead, &hChildStdoutWrite, &saAttr, 0)) {
        STARTUPINFO si;
        PROCESS_INFORMATION pi;
        ZeroMemory(&si, sizeof(STARTUPINFO));
        si.cb = sizeof(STARTUPINFO);
        si.hStdError = hChildStdoutWrite;
        si.hStdOutput = hChildStdoutWrite;
        si.hStdInput = hChildStdinRead;
        si.dwFlags |= STARTF_USESTDHANDLES;

        int wideStrLength = MultiByteToWideChar(CP_UTF8, 0, importYosysToolTemp.c_str(), -1, NULL, 0);
        std::wstring importYosysTool(wideStrLength, L'\0');
        MultiByteToWideChar(CP_UTF8, 0, importYosysToolTemp.c_str(), -1, &importYosysTool[0], wideStrLength);
        std::wstring batchFileLocation = importYosysTool;

        //LPWSTR procDirec = const_cast<LPWSTR>(batchFileLocation.c_str());
        LPWSTR procDirec = (LPWSTR)L"D:/yosys/oss-cad-suite/start.bat";

        if (CreateProcess(procDirec, NULL, NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi)) {
            std::string moduleLocation = VerilogModulePath;
            //std::string moduleLocation = "D:/yosys/oss-cad-suite/start.bat";
            //std::string savepath = selectedFolder;
            std::string savepath = "D:/SoftwareFrameWork/YosysOutputs/";
            size_t lastSlash = moduleLocation.find_last_of("/\\");
            if (lastSlash != std::string::npos) {
                std::string moduleNameWithExtension = moduleLocation.substr(lastSlash + 1);
                size_t lastDot = moduleNameWithExtension.find_last_of(".");
                std::string moduleName = moduleNameWithExtension.substr(0, lastDot);

                std::vector<std::string> commands = {
                    "yosys\n",
                    "read_verilog " + moduleName + ".v\n",
                    "splitnets -ports\n",
                    "read_verilog -lib cmos_cells.v\n",
                    "synth\n",
                    "dfflibmap -liberty cmos_cells.lib\n",
                    "abc -liberty cmos_cells.lib\n",
                    "opt_clean\n",
                    "stat -liberty cmos_cells.lib\n",
                    "write_verilog " + savepath + "/" + moduleName + "_synth.v\n",
                    "exit\n",
                    "exit\n"
                };

                int NumberofBytes;
                if (moduleName == "ADDER") {
                    NumberofBytes = 21698;
                }
                if (moduleName == "ALU") {
                    NumberofBytes = 13947;
                }
                if (moduleName == "ALU_Control") {
                    NumberofBytes = 13971;
                }
                if (moduleName == "Control") {
                    NumberofBytes = 13959;
                }
                if (moduleName == "Data_Mem") {
                    NumberofBytes = 13962;
                }
                if (moduleName == "EX_Mem") {
                    NumberofBytes = 13956;
                }
                if (moduleName == "Forwarding_MUX") {
                    NumberofBytes = 13970;
                }
                if (moduleName == "Forwarding_unit") {
                    NumberofBytes = 25000;
                }
                if (moduleName == "Hazard_Detect") {
                    NumberofBytes = 22000;
                }
                if (moduleName == "ID_EX") {
                    NumberofBytes = 24300;
                }
                if (moduleName == "IF_ID") {
                    NumberofBytes = 24800;
                }
                if (moduleName == "Instruction_memory") {
                    NumberofBytes = 123700;
                }
                if (moduleName == "MEM_WB") {
                    NumberofBytes = 22000;
                }
                if (moduleName == "MUX_Control") {
                    NumberofBytes = 24300;
                }
                if (moduleName == "MUX32") {
                    NumberofBytes = 20800;
                }
                if (moduleName == "PC") {
                    NumberofBytes = 24500;
                }
                if (moduleName == "Reg_file") {
                    NumberofBytes = 60000;
                }
                if (moduleName == "Shift2") {
                    NumberofBytes = 18000;
                }
                if (moduleName == "Sign_Extender") {
                    NumberofBytes = 24800;
                }
                //else {
                  //  NumberofBytes = 26000;
                //}

                
                for (const std::string& command : commands) {
                    DWORD bytesWritten;
                    if (!WriteFile(hChildStdinWrite, command.c_str(), command.size(), &bytesWritten, NULL)) {
                        ShowErrorMessage("Error writing to pipe");
                        break;
                    }
                }

                CloseHandle(hChildStdinWrite);

                char buffer[2]{};
                DWORD bytesRead;
                for (int i = 0; i <= 13947; i++) {
                    if (ReadFile(hChildStdoutRead, buffer, sizeof(buffer) - 1, &bytesRead, NULL));
                    //std::cout << buffer;
                //while (ReadFile(hChildStdoutRead, buffer, sizeof(buffer) - 1, &bytesRead, NULL) && bytesRead > 0) {
                  //  buffer[bytesRead] = '\0';
                     txtOutput += buffer; // Log Yosys output
                }

                CloseHandle(hChildStdoutRead);
                CloseHandle(pi.hProcess);
                CloseHandle(pi.hThread);
            }
            else {
                ShowErrorMessage("Error extracting module name from the file location");
            }
        }
        else {
            ShowErrorMessage("Error creating Yosys process");
        }

        CloseHandle(hChildStdinRead);
        CloseHandle(hChildStdoutWrite);
    }
    else {
        ShowErrorMessage("Error creating pipes");
    }

    return 0;
}
