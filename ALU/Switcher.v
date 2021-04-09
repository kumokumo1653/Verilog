`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:44:07 01/08/2021 
// Design Name: 
// Module Name:    Switcher 
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
module Switcher(CLK, D1, D2);
	input CLK;
	output D1;
	output D2;
	
	function [1:0]switch;
		input SW;
		begin
		case (SW)
			0:switch = 2'b10;
			1:switch = 2'b01;
			default:switch = 2'bXX;
		endcase
	end
	endfunction
	
	assign {D1, D2} = switch(CLK);

endmodule
