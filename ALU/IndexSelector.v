`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:30:13 01/22/2021 
// Design Name: 
// Module Name:    IndexSelector 
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
module IndexSelector(Switches, Index);
	input [7:0]Switches;
	output [3:0]Index;
	
	function [3:0]switch;
		input [7:0]SW;
		begin
			case (SW)
				8'b00000001:switch = 0;
				8'b00000010:switch = 1;
				8'b00000100:switch = 2;
				8'b00001000:switch = 3;
				8'b00010000:switch = 4;
				8'b00100000:switch = 5;
				8'b01000000:switch = 6;
				8'b10000000:switch = 7;
				default:switch = 4'bXXXX;
			endcase
		end
	endfunction
	
	assign Index = switch(Switches);

endmodule
