`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:12:14 07/21/2021
// Design Name:   Main
// Module Name:   C:/Users/kumomomo/Studying/5J/Verilog/i4001/MainTest.v
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

module MainTest;

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
		in = 16'b0000_0000_0000_0000;
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
		if(i == 0)begin
			#100000 MCLK = ~MCLK;
			in = in + 16'b0000_0000_0000_0001;
			#100 MCLK = ~MCLK;
		end
		if(in == 16'b0000_0000_1111_1111)begin
			i = 1;
			SWITCH = 1;
			in[15] = 0;
			in[13] = 1;
			#100000 MCLK = ~MCLK;
			#100000 MCLK = ~MCLK;
			#100 in[13] = 0;
			#100 SWITCH = 1;
			
		end
	end

		
endmodule

