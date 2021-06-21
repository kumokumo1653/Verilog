`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:51:58 06/21/2021 
// Design Name: 
// Module Name:    Main 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Main(column_id, in_column, CLK, IN_CLR, LOAD, RESET, column_seg, out_column, COLUMN_CLK, OUT_CLR);
    input [4:0]column_id;
	input [15:0]in_column;
	input CLK, IN_CLR, LOAD, RESET;
	output COLUMN_CLK, OUT_CLR;
	output [3:0]column_seg;
	output [15:0]out_column;

endmodule
