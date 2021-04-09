`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:57:08 12/25/2020
// Design Name:   Switcher
// Module Name:   C:/Users/fjsda/Studying/FPGA/SevenSegment/SwitcherTest.v
// Project Name:  SevenSegment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Switcher
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SwitcherTest;

	// Inputs
	reg [1:0]CLK;

	// Outputs
	wire D1;
	wire D2;
	wire D3;

	// Instantiate the Unit Under Test (UUT)
	Switcher uut (
		.CLK(CLK), 
		.D1(D1), 
		.D2(D2),
		.D3(D3)
	);

		// Initialize Inputs
		

		// Wait 100 ns for global reset to finish
		always#(30) begin
			#10 CLK = 2'b00;
			#10 CLK = 2'b01;
			#10 CLK = 2'b10;
      end
		// Add stimulus here

      
endmodule

