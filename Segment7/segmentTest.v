`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:51:55 01/06/2021
// Design Name:   Segment7
// Module Name:   C:/Users/fjsda/Studying/FPGA/Segment7/segmentTest.v
// Project Name:  Segment7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Segment7
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module segmentTest;

	// Inputs
	reg CLK;
	reg RESET;
	reg REVERSE;

	// Outputs
	wire D1;
	wire D2;
	wire D3;
	wire [7:0] DOUT;

	// Instantiate the Unit Under Test (UUT)
	Segment7 uut (
		.CLK(CLK), 
		.RESET(RESET), 
		.REVERSE(REVERSE), 
		.D1(D1), 
		.D2(D2), 
		.D3(D3), 
		.DOUT(DOUT)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		RESET = 0;
		REVERSE = 0;

		// Wait 100 ns for global reset to finish
		forever begin
			#12.5 CLK = ~CLK;
		end
		// Add stimulus here

	end
      
endmodule

