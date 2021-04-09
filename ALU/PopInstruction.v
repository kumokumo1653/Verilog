`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:06:16 02/08/2021 
// Design Name: 
// Module Name:    PopInstruction 
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
module PopInstruction(CLK, register, instruction);
	input CLK;
	input [7:0]register[4:0];
	output instruction;
	reg [7:0]instruction = 8'b00000000;
	integer i = 0;
	always @ (posedge CLK)begin
		instruction <= register[i];
		if(i < 4)begin
			i = i + 1;
		end
	end

endmodule
