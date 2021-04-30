`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:55:50 04/30/2021
// Design Name:   segment7
// Module Name:   C:/Users/fjsda/Studying/Verilog/segment7Module/seg7.v
// Project Name:  segment7Module
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: segment7
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module seg7;

	// Inputs
	reg CLK;
	reg IN_CLR;
	reg [3:0] D1;
	reg [3:0] D2;
	reg [3:0] D3;
	reg [3:0] D4;

	// Outputs
	wire [7:0] PATTERN;
	wire [3:0] DIGIT;

	// Instantiate the Unit Under Test (UUT)
	segment7 uut (
		.CLK(CLK), 
		.IN_CLR(IN_CLR), 
		.D1(D1), 
		.D2(D2), 
		.D3(D3), 
		.D4(D4), 
		.PATTERN(PATTERN), 
		.DIGIT(DIGIT)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		IN_CLR = 1;
		D1 = 4'b0001;
		D2 = 4'b1111;
		D3 = 4'b1010;
		D4 = 4'b0101;
		
		forever begin
		#12.5 CLK = ~CLK;
		end
		
		// Add stimulus here

	end
      
endmodule

