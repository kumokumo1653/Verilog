`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:10:01 02/09/2021 
// Design Name: 
// Module Name:    test 
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
module test(CLK, OUT1, OUT2);
	input CLK;
	
	output[3:0] OUT1;
	output[3:0] OUT2;
	wire [3:0]buff1;
	wire [3:0]buff2;
	reg [3:0]OUT1;
	reg [3:0]OUT2;
	integer j = 0;
	reg[7:0] instruction[0:4];
	reg[3:0] indexregister[0:7];
	reg[3:0] accumulator = 4'b1010;
	reg [3:0]status = 4'b0101;
	wire [3:0] indexIO;
	wire [2:0] mode;
	reg [7:0] inst;
	wire processing;
	reg [2:0]i = 0;
	
	
	reg [3:0]OPR = 4'b0000;
	reg [3:0]OPA = 4'b0000;
	initial begin
		
		instruction[0] = 8'b00011101;
		instruction[1] = 8'b00100000;
		instruction[2] = 8'b00010111;
		instruction[3] = 8'b01000000;
		instruction[4] = 8'b00000000;
		for(j = 0; j < 8;j = j + 1)begin
			indexregister[j] = j;
		end
	end
	
	
	
	always @ (posedge CLK)begin
		inst <= instruction[i];
		if(i < 5)begin
			i <= i + 3'b0001;
		end
		
		OPR <= inst[7:4];
		OPA <= inst[3:0];
		if (OPR == 4'b0001)begin
			accumulator <= OPA;
			status <= 4'b0000;
		end
		
		if (OPR == 4'b0010) begin
			if(OPA >= 0 && OPA <= 7)begin
				indexregister[OPA] <= accumulator;
				status <= 4'b0000;
			end
		end
		
		if (OPR == 4'b0011) begin
			if(OPA >= 0 && OPA <= 7)begin
				accumulator <= indexregister[OPA];
				status <= 4'b0000;
			end
		end
		
		if (OPR == 4'b0100) begin
			if(OPA >= 0 && OPA <= 7)begin
				{status, accumulator} <= accumulator + indexregister[OPA];
			end
		end
		
		if (OPR == 4'b0101) begin
			if(OPA >= 0 && OPA <= 7)begin
				{status, accumulator} <= accumulator - indexregister[OPA];
			end
		end
		
	end
	
	always @ (accumulator, status)begin
		OUT1 <= accumulator;
		OUT2 <= status;
	end
	

endmodule
