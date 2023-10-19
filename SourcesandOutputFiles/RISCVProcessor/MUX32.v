`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/23/2023 10:44:36 PM
// Design Name: 
// Module Name: MUX32
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


module MUX32(
    data1_i    ,
    data2_i    ,
    select_i   ,
    data_o     
);

input [31:0] data1_i,data2_i;
input select_i;
output[31:0] data_o;

assign data_o = (select_i)? data2_i : data1_i ;

endmodule