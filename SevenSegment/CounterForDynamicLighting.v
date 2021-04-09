`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:32:43 12/26/2020 
// Design Name: 
// Module Name:    CounterForDynamicLighting 
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
module CounterForDynamicLighting(CLK, S_CLK);
	input CLK;
	output [1:0]S_CLK;
	reg [1:0]S_CLK = 2'b00;
	always @(posedge CLK) begin
		if(S_CLK == 2'b10) begin
			S_CLK <= 2'b00;
		end
		else
			S_CLK <= S_CLK + 2'b01;
	end

endmodule
