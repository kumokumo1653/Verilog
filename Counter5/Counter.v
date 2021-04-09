`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:08:15 11/27/2020 
// Design Name: 
// Module Name:    Counter 
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
module Counter(CLK, RESET, Q);
	input CLK;
	input RESET;
	output [2:0] Q;
	reg [2:0] Q;
	
	always @(posedge CLK)
	begin
		if(~RESET)
			Q <= 3'b000;
		else if(Q == 3'b100)
			Q <= 3'b000;
		else
			Q <= Q + 1'b1;
	end

endmodule
