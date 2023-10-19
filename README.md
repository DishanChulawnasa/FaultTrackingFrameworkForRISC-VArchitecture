# FaultTrackingFrameworkForRISC-VArchitecture
This project focuses on developing a fault-tracking framework for the RISC-V architecture, a prominent open-source computer architecture, to enable controlled fault introduction and behavior analysis at both circuit and system levels. By leveraging fault models and Design for Testability (DFT), the project aims to enhance IC design reliability and reduce testing costs. The process involves transforming the initial Verilog file into a gate-level design, adding scan chains for testing sequential circuits, and using the PODEM ATPG algorithm to generate test vectors for potential fault nodes. Fault injection is conducted, and both faulty and fault-free outputs are recorded. These test vectors are used to assess and verify the presence of faults by comparing the faulty outputs with their fault-free counterparts, ultimately contributing to improved product quality and dependability in IC design. C++ and Verilog HDL are
used for the software framework development.

![Methodology](https://github.com/DishanChulawnasa/FaultTrackingFrameworkForRISC-VArchitecture/assets/129721116/821d8d7b-d530-4821-b71f-e1603ccf1898)

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
