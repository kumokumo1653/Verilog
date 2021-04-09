`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:59:58 01/08/2021 
// Design Name: 
// Module Name:    InstructionDecoder 
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
module InstructionDecoder(instruction, mode, index, status, accumulator, processing);
	input [7:0]instruction;
	output [3:0]index;
	output [2:0]mode;
	output [3:0]status;
	output [3:0]accumulator;
	output processing;
	reg [3:0]index;
	reg [2:0]mode;
	reg [3:0]status;
	reg [3:0]accumulator;
	reg [3:0]OPR = 4'b0000;
	reg [3:0]OPA = 4'b0000;

	reg processing = 0;
	always @ (instruction) begin

		OPR <= instruction[7:4];
		OPA <= instruction[3:0];
		if (OPR == 4'b0001)begin
			accumulator <= OPA;
			status <= 4'b0000;
			processing <= ~processing;
		end
		
		if (OPR == 4'b0010) begin
			if(OPA >= 0 && OPA <= 7)begin
				mode <= 1;
				index <= OPA;
				processing <= ~processing;
			end
		end
		
		if (OPR == 4'b0011) begin
			if(OPA >= 0 && OPA <= 7)begin
				mode <= 2;
				index <= OPA;
				processing <= ~processing;
			end
		end
		
		if (OPR == 4'b0100) begin
			if(OPA >= 0 && OPA <= 7)begin
				mode <= 3;
				index <= OPA;
				processing <= ~processing;
			end
		end
		
		if (OPR == 4'b0101) begin
			if(OPA >= 0 && OPA <= 7)begin
				mode <= 4;
				index <= OPA;
				processing <= ~processing;
			end
		end
		
		
		
		
	
	end
	
endmodule
