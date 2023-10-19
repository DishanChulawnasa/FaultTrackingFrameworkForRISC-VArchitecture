`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/29/2023 11:02:03 PM
// Design Name: 
// Module Name: Shift2
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


module Shift2 (
  input [31:0] data_i,
  output [31:0] data_o
);

assign data_o = {data_i[30:0],1'b0};

endmodule