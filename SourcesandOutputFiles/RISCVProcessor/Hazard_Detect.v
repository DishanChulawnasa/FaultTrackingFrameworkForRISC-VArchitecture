`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/23/2023 01:28:07 PM
// Design Name: 
// Module Name: Hazard_Detect
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


module Hazard_Detect(
    IF_IDrs1_i,
    IF_IDrs2_i,
    ID_EXrd_i,
    ID_EX_MemRead_i,
    Hazard_o
);

input ID_EX_MemRead_i;
input [4:0] IF_IDrs1_i, IF_IDrs2_i, ID_EXrd_i;
output Hazard_o;

assign Hazard_o = ((ID_EX_MemRead_i && (ID_EXrd_i == IF_IDrs1_i || ID_EXrd_i == IF_IDrs2_i))? 1'b1 : 1'b0);

endmodule