`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:40:57 01/08/2021 
// Design Name: 
// Module Name:    Selector 
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
module Selector(SW, CNT1, CNT2, CNT);
	input [3:0]CNT1;
	input [3:0]CNT2;
	input SW;
	output [3:0]CNT;
	function [3:0]switch;
		input [3:0]temp1;
		input [3:0]temp2;
		input SW;
		begin
		case (SW)
			0:switch = temp1;
			1:switch = temp2;
			default:switch = 4'bXXXX;
		endcase
	end
	endfunction
	
	assign CNT = switch(CNT1, CNT2, SW);


endmodule
