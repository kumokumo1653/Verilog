`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:24:23 08/06/2021
// Design Name:   Main
// Module Name:   C:/Users/kumomomo/Studying/5J/Verilog/i4001/MainTest2.v
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

module MainTest2;

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

	initial begin
		// Initialize Inputs
		CLK = 0;
		in = 0;
		MCLK = 0;
		SWITCH = 0;
		RESET = 0;

		// Wait 100 ns for global reset to finish
	
		// Add stimulus here

	end
	
	always begin
		#1 CLK = ~CLK;
	end
	integer i = 0;
	always begin
			#100000 MCLK = ~MCLK;
			in = in + 16'b0000_0000_0000_0001;
			#100 MCLK = ~MCLK;
		if(in == 16'b0000_0000_1111_1111)begin
			RESET = 1;
			#1000 RESET = 0;
			
		end
	end
      
endmodule

