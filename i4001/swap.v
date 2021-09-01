`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:19:17 08/31/2021 
// Design Name: 
// Module Name:    swap 
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
module swap(in, out);
	input [7:0] in;
	output [7:0] out;
	
	assign out = byteSwap(in);
	function [7:0] byteSwap(input [7:0] in);
		begin
			byteSwap[0] = in[7];
			byteSwap[1] = in[6];
			byteSwap[2] = in[5];
			byteSwap[3] = in[4];
			byteSwap[4] = in[3];
			byteSwap[5] = in[2];
			byteSwap[6] = in[1];
			byteSwap[7] = in[0];
		end
	endfunction

endmodule
