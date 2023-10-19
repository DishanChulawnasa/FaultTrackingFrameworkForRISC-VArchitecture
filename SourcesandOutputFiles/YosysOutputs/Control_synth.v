/* Generated by Yosys 0.33+6 (git sha1 31ee566ec, x86_64-w64-mingw32-g++ 9.2.1 -Os) */

(* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Control.v:23.1-107.10" *)
module Control(opcode_i, MemtoReg_o, MemRead_o, MemWrite_o, RegWrite_o, ALUOp_o, ALUSrc_o, immSelect_o);
  wire _00_;
  wire _01_;
  wire _02_;
  wire _03_;
  wire _04_;
  wire _05_;
  wire _06_;
  wire _07_;
  wire _08_;
  wire _09_;
  wire _10_;
  wire _11_;
  wire _12_;
  wire _13_;
  wire _14_;
  wire _15_;
  wire _16_;
  wire _17_;
  wire _18_;
  wire _19_;
  wire _20_;
  wire _21_;
  wire _22_;
  wire _23_;
  wire _24_;
  wire _25_;
  wire _26_;
  wire _27_;
  wire _28_;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Control.v:26.18-26.25" *)
  output [1:0] ALUOp_o;
  wire [1:0] ALUOp_o;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Control.v:28.12-28.20" *)
  output ALUSrc_o;
  wire ALUSrc_o;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Control.v:27.23-27.32" *)
  output MemRead_o;
  wire MemRead_o;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Control.v:27.33-27.43" *)
  output MemWrite_o;
  wire MemWrite_o;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Control.v:27.12-27.22" *)
  output MemtoReg_o;
  wire MemtoReg_o;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Control.v:27.44-27.54" *)
  output RegWrite_o;
  wire RegWrite_o;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Control.v:28.21-28.32" *)
  output immSelect_o;
  wire immSelect_o;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Control.v:25.13-25.21" *)
  input [6:0] opcode_i;
  wire [6:0] opcode_i;
  NOT _29_ (
    .A(opcode_i[2]),
    .Y(_00_)
  );
  NOT _30_ (
    .A(opcode_i[6]),
    .Y(_01_)
  );
  NOT _31_ (
    .A(opcode_i[4]),
    .Y(_02_)
  );
  NOT _32_ (
    .A(opcode_i[5]),
    .Y(_03_)
  );
  NAND _33_ (
    .A(opcode_i[1]),
    .B(opcode_i[0]),
    .Y(_04_)
  );
  NOR _34_ (
    .A(opcode_i[3]),
    .B(_04_),
    .Y(_05_)
  );
  NAND _35_ (
    .A(_00_),
    .B(_05_),
    .Y(_06_)
  );
  NOT _36_ (
    .A(_06_),
    .Y(_07_)
  );
  NOR _37_ (
    .A(opcode_i[6]),
    .B(_06_),
    .Y(_08_)
  );
  NAND _38_ (
    .A(_01_),
    .B(_07_),
    .Y(_09_)
  );
  NOR _39_ (
    .A(opcode_i[4]),
    .B(opcode_i[5]),
    .Y(_10_)
  );
  NAND _40_ (
    .A(_08_),
    .B(_10_),
    .Y(_11_)
  );
  NOT _41_ (
    .A(_11_),
    .Y(MemRead_o)
  );
  NAND _42_ (
    .A(opcode_i[2]),
    .B(_05_),
    .Y(_12_)
  );
  NAND _43_ (
    .A(opcode_i[6]),
    .B(opcode_i[4]),
    .Y(_13_)
  );
  NOR _44_ (
    .A(opcode_i[5]),
    .B(_13_),
    .Y(_14_)
  );
  NOT _45_ (
    .A(_14_),
    .Y(_15_)
  );
  NOR _46_ (
    .A(_12_),
    .B(_15_),
    .Y(_16_)
  );
  NOT _47_ (
    .A(_16_),
    .Y(_17_)
  );
  NOR _48_ (
    .A(MemRead_o),
    .B(_16_),
    .Y(_18_)
  );
  NAND _49_ (
    .A(_11_),
    .B(_17_),
    .Y(_19_)
  );
  NAND _50_ (
    .A(opcode_i[4]),
    .B(_08_),
    .Y(_20_)
  );
  NOT _51_ (
    .A(_20_),
    .Y(_21_)
  );
  NAND _52_ (
    .A(_18_),
    .B(_20_),
    .Y(RegWrite_o)
  );
  NAND _53_ (
    .A(_02_),
    .B(opcode_i[5]),
    .Y(_22_)
  );
  NOR _54_ (
    .A(_09_),
    .B(_22_),
    .Y(MemWrite_o)
  );
  NOR _55_ (
    .A(_01_),
    .B(_22_),
    .Y(_23_)
  );
  NAND _56_ (
    .A(_07_),
    .B(_23_),
    .Y(_24_)
  );
  NOR _57_ (
    .A(_03_),
    .B(_20_),
    .Y(_25_)
  );
  NAND _58_ (
    .A(opcode_i[5]),
    .B(_21_),
    .Y(_26_)
  );
  NOR _59_ (
    .A(_06_),
    .B(_22_),
    .Y(_27_)
  );
  NOR _60_ (
    .A(_19_),
    .B(_27_),
    .Y(ALUOp_o[1])
  );
  NAND _61_ (
    .A(_26_),
    .B(ALUOp_o[1]),
    .Y(_28_)
  );
  NAND _62_ (
    .A(_24_),
    .B(_28_),
    .Y(ALUOp_o[0])
  );
  NOR _63_ (
    .A(_16_),
    .B(_25_),
    .Y(ALUSrc_o)
  );
  assign MemtoReg_o = MemRead_o;
  assign immSelect_o = MemWrite_o;
endmodule
