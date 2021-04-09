`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:35:39 01/08/2021 
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
module CounterForDynamicLighting(input CLK, output S_CLK);
	input CLK;
	output [1:0]S_CLK;
	reg [1:0]S_CLK = 2'b00;
	always @(posedge CLK) begin
		if(S_CLK == 2'b11) begin
			S_CLK <= 2'b00;
		end
		else
			S_CLK <= S_CLK + 2'b01;
	end

endmodule
