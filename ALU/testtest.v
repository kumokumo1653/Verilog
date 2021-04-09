`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:16:00 02/09/2021
// Design Name:   test
// Module Name:   C:/Users/fjsda/Studying/FPGA/ALU/testtest.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testtest;

	// Inputs
	reg CLK;

	// Outputs
	wire [3:0] OUT1;
	wire [3:0] OUT2;

	// Instantiate the Unit Under Test (UUT)
	test uut (
		.CLK(CLK), 
		.OUT1(OUT1), 
		.OUT2(OUT2)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		#100;
      CLK = ~CLK;
		#100;
		CLK = ~CLK;
		#100;
		CLK = ~CLK;
		#100;
		CLK = ~CLK;
		#100;
		CLK = ~CLK;
		#100;
		CLK = ~CLK;
		#100;
		CLK = ~CLK;
		#100;
		CLK = ~CLK;
		#100;
		CLK = ~CLK;
		#100;
		CLK = ~CLK;
		#100;
		CLK = ~CLK;
		#100;
		CLK = ~CLK;
		#100;
		CLK = ~CLK;
		#100;
		CLK = ~CLK;
		#100;
		// Add stimulus here

	end
      
endmodule

