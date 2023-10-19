`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/23/2023 01:27:06 PM
// Design Name: 
// Module Name: Forwarding_unit
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

module Forwarding_unit
(   
    EX_MEM_RegWrite_i,
    EX_MEM_RD_i,
    ID_EX_RS_i,
    ID_EX_RT_i,
    MEM_WB_RegWrite_i,
    MEM_WB_RD_i,
    ForwardA_o,
    ForwardB_o
);

input			    EX_MEM_RegWrite_i, MEM_WB_RegWrite_i;
input	    [4:0]	ID_EX_RS_i, ID_EX_RT_i, EX_MEM_RD_i, MEM_WB_RD_i;
output reg	[1:0]	ForwardA_o, ForwardB_o;

always@(*)begin
    ForwardA_o = 2'b00;

    if(EX_MEM_RegWrite_i && 
    (EX_MEM_RD_i != 5'b00000) && 
    (EX_MEM_RD_i == ID_EX_RS_i)) ForwardA_o = 2'b10;

    else if(MEM_WB_RegWrite_i &&
    (MEM_WB_RD_i != 5'b00000) &&
    MEM_WB_RD_i == ID_EX_RS_i)  ForwardA_o = 2'b01;

    ForwardB_o = 2'b00;

    if(EX_MEM_RegWrite_i && 
    (EX_MEM_RD_i != 5'b00000) && 
    (EX_MEM_RD_i == ID_EX_RT_i)) ForwardB_o = 2'b10;

    else if(MEM_WB_RegWrite_i &&
    (MEM_WB_RD_i != 5'b00000) &&
    MEM_WB_RD_i == ID_EX_RT_i)  ForwardB_o = 2'b01;

end
endmodule