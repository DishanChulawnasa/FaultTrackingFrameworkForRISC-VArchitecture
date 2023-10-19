`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/23/2023 10:42:17 PM
// Design Name: 
// Module Name: Forwarding_MUX
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


module Forwarding_MUX(
    select_i,
    data_i,
    EX_MEM_i,
    MEM_WB_i,
    data_o
);

input	[1:0]		select_i;
input	[31:0]		data_i, EX_MEM_i, MEM_WB_i;
output reg[31:0]	data_o;


always @(*) begin
	case(select_i)
        2'b00: data_o = data_i;

        2'b01: data_o = MEM_WB_i;

		2'b10: data_o = EX_MEM_i;	

        default : data_o = data_i;
	endcase
end

endmodule