`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:31:10 01/06/2021
// Design Name:   Switcher
// Module Name:   C:/Users/fjsda/Studying/FPGA/Segment7/SwitcherTest.v
// Project Name:  Segment7
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
	reg [1:0] CLK;

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

	initial begin
		// Initialize Inputs
		CLK = 2'b00;
		
		// Wait 100 ns for global reset to finish
		forever begin
			#10 CLK = 2'b00;
			#10 CLK = 2'b01;
			#10 CLK = 2'b10;
		end
        
		// Add stimulus here

	end
      
endmodule

