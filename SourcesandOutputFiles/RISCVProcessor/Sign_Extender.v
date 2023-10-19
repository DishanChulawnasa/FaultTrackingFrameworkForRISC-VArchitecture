`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/23/2023 12:38:41 PM
// Design Name: 
// Module Name: Sign_Extender
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


module Sign_Extender(
    select_i,
    data0_i,
    data1_i,
    data_o     
);
input [11:0] data0_i,data1_i;
input select_i;
output[31:0] data_o;

assign data_o = (select_i)? {{20{data1_i[11]}},data1_i} : {{20{data0_i[11]}},data0_i} ; 

endmodule