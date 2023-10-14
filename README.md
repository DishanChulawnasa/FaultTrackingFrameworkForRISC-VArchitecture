# FaultTrackingFrameworkForRISC-VArchitecture
The research project involves the implementation of the RISC-V instruction set processor on FPGAs, accompanied by the creation of a dedicated software tool for fault injection and tracking. The pre-designed 32-bit RISC-V processor exported from Xilinx Vivado is imported into the software framework developed in Visual Studio with C++ and Verilog HDL programming. The project uses open-source tools Yosys Open Synthesis Suite, Icarus Verilog, and RISC-V Emulators. The software framework contains the main 6 C++ and Verilog tools so far: Verilog gate-level netlist generation, SCAN Chain implementation to sequential elements, simple gate-level Verilog to text conversion, Verilog fault injection mechanism, PODEM ATPG algorithm implementation for input test vector generation and fault injection and comparator tool for the output vectors.
![Methodology](https://github.com/DishanChulawnasa/FaultTrackingFrameworkForRISC-VArchitecture/assets/129721116/81bde89c-d606-4695-b530-47645f1d9867)

------------------------------------------------------------------------------------------

**GitHub links for independent tools development:**
-----------------------------------------------------------------------------------------------

Yosys Sythesys Suite: https://github.com/YosysHQ/yosys

YOSYS Exporter C++ Tool: https://github.com/DishanChulawnasa/YosysModuleExporter

Sequntial Remover C++ Tool (for SCAN Chain implementation): https://github.com/DishanChulawnasa/SequentialToCombinational

Verilog to Text Conversion C++ Tool: https://github.com/DishanChulawnasa/VerilogToText

ATPG PODEM (Automatic Test Pattern Generation Path-Oriented DEcision Making) Algorithm C++ Tool: https://github.com/DishanChulawnasa/PODEM_CLI

Overall GUI framework: https://github.com/DishanChulawnasa/FaultTrackingFrameworkForRISC-VArchitecture

First Semester: https://github.com/DishanChulawnasa/Sem1_FinalYearProject

------------------------------------------------------------------------------------------

Software Documentation: https://sites.google.com/view/faulttrackingframework/home

YouTube - https://youtube.com/@FaultTrackingFramework?si=GTGos-1t-pp_WdMU

Project Portfolio: https://sites.google.com/eng.pdn.ac.lk/project-e17043/home
