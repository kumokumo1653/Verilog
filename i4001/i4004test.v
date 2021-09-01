`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:14:36 09/01/2021
// Design Name:   Main
// Module Name:   C:/Users/kumomomo/Studying/5J/Verilog/i4001/i4004test.v
// Project Name:  i4001
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module i4004test;

	// Inputs
	reg CLK;
	reg [15:0] in;
	reg MCLK;
	reg SWITCH;
	reg RESET;

	// Outputs
	wire [7:0] seg_pattern;
	wire [3:0] seg_digit;
	wire DMD_CLR;
	wire [3:0] dmd_seg;
	wire [15:0] dmd_column;
	wire DMD_CLK;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.CLK(CLK), 
		.in(in), 
		.MCLK(MCLK), 
		.SWITCH(SWITCH), 
		.RESET(RESET), 
		.seg_pattern(seg_pattern), 
		.seg_digit(seg_digit), 
		.DMD_CLR(DMD_CLR), 
		.dmd_seg(dmd_seg), 
		.dmd_column(dmd_column), 
		.DMD_CLK(DMD_CLK)
	);
	integer i = 0;
	initial begin
		// Initialize Inputs
		CLK = 0;
		MCLK = 0;
		SWITCH = 0;
		RESET = 0;
		
		//D5 B0
		
		in = 16'b0000_1101_1010_1011;
		#100;
		MCLK = 1;
		#100;
		//D0 B1
		MCLK = 0;
		#100;
		in = 16'b1000_1101_0000_1011;
		MCLK = 1;
		#100;
		//D0 B2
		MCLK = 0;
		#100;
		in = 16'b0100_1101_0000_1011;
		MCLK = 1;
		#100;
		//D0 B3
		MCLK = 0;
		#100;
		in = 16'b1100_1101_0000_1011;
		MCLK = 1;
		#100;
		//70 0C
		MCLK = 0;
		#100;
		in = 16'b0011_0000_0000_1110;
		MCLK = 1;
		#100;
		//40 16
		MCLK = 0;
		#100;
		in = 16'b0110_1000_0000_0010;
		MCLK = 1;
		#100;
		//61 A1
		MCLK = 0;
		#100;
		in = 16'b1000_0101_1000_0110;
		MCLK = 1;
		#100;
		//82 B2
		MCLK = 0;
		#100;
		in = 16'b0100_1101_0100_0001;
		MCLK = 1;
		#100;
		//1A 14
		MCLK = 0;
		#100;
		in = 16'b0010_1000_0101_1000;
		MCLK = 1;
		#100;
		//63 F1
		MCLK = 0;
		#100;
		in = 16'b1000_1111_1100_0110;
		MCLK = 1;
		#100;
		//40 08
		MCLK = 0;
		#100;
		in = 16'b0001_0000_0000_0010;
		MCLK = 1;
		#100;
		//63 F1
		MCLK = 0;
		#100;
		in = 16'b1000_0000_0000_0000;
		MCLK = 1;
		#100;
		
		SWITCH = 1;
		in[15] = 0;
		#100;
		for (i = 0; i < 50000; i = i + 1)begin
			#100;
			MCLK = ~MCLK;
		end
	end
   always begin
		#1 CLK = ~CLK;
	end
endmodule

