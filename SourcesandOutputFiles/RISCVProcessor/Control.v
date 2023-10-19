`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/20/2023 07:27:46 PM
// Design Name: 
// Module Name: Control
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module Control(opcode_i,MemtoReg_o,MemRead_o,MemWrite_o,RegWrite_o,ALUOp_o,ALUSrc_o,immSelect_o);

input [6:0] opcode_i;
output reg [1:0] ALUOp_o;
output reg MemtoReg_o,MemRead_o,MemWrite_o,RegWrite_o;
output reg ALUSrc_o,immSelect_o;

always@(*)begin

  case(opcode_i)

  7'b0010011 : begin //addi
  ALUOp_o = 2'b11;
  ALUSrc_o = 1'b1;
  RegWrite_o = 1'b1;
  MemRead_o = 1'b0;
  MemWrite_o = 1'b0;
  MemtoReg_o = 1'b0;
  immSelect_o = 1'b0;
  end
  
  7'b0110011 : begin //others
  ALUOp_o = 2'b10;
  ALUSrc_o = 1'b0;
  RegWrite_o = 1'b1;
  MemRead_o = 1'b0;
  MemWrite_o = 1'b0;
  MemtoReg_o = 1'b0;
  immSelect_o = 1'b0;
  end

  7'b1100011 : begin //beq
  ALUOp_o = 2'b01;
  ALUSrc_o = 1'b1;
  RegWrite_o = 1'b0;
  MemRead_o = 1'b0;
  MemWrite_o = 1'b0;
  MemtoReg_o = 1'b0;
  immSelect_o = 1'b0;
  end

  7'b0000011 : begin //lw
  ALUOp_o = 2'b00;
  ALUSrc_o = 1'b1;
  MemRead_o = 1'b1;
  MemtoReg_o = 1'b1;
  RegWrite_o = 1'b1;
  MemWrite_o = 1'b0;
  immSelect_o = 1'b0;
  end

  7'b0100011 : begin //sw
  ALUOp_o = 2'b00;
  ALUSrc_o = 1'b1;
  MemWrite_o = 1'b1;
  RegWrite_o = 1'b0;
  MemRead_o = 1'b0;
  MemtoReg_o = 1'b0;
  immSelect_o = 1'b1;
  end

  //---------NEW-----------
  7'b1010111: begin //vector
  ALUOp_o = 2'b00; //useless
  ALUSrc_o = 1'b0;
  RegWrite_o = 1'b1;
  MemRead_o = 1'b0;
  MemWrite_o = 1'b0;
  MemtoReg_o = 1'b0;
  immSelect_o = 1'b0;
  end
  //---------NEW-----------

  default : begin
  ALUOp_o = 2'b11;
  ALUSrc_o = 1'b1;
  RegWrite_o = 1'b0;
  MemRead_o = 1'b0;
  MemWrite_o = 1'b0;
  MemtoReg_o = 1'b0;
  immSelect_o = 1'b0;
  end
  endcase
end
endmodule
