`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:39:30 12/25/2020 
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
module Switcher(CLK, D1, D2, D3);
	input [1:0]CLK;
	output D1;
	output D2;
	output D3;
	
	function [2:0]switch;
		input [1:0]SW;
		begin
		case (SW)
			2'b00:switch = 3'b100;
			2'b01:switch = 3'b010;
			2'b10:switch = 3'b001;
			default:switch = 3'bXXX;
		endcase
	end
	endfunction
	
	assign {D1, D2, D3} = switch(CLK);
endmodule
