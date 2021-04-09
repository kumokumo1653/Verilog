`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:26:13 01/06/2021
// Design Name:   Selector
// Module Name:   C:/Users/fjsda/Studying/FPGA/Segment7/SelectorTest.v
// Project Name:  Segment7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Selector
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SelectorTest;

	// Inputs
	reg [1:0] SW;
	reg [3:0] CNT1;
	reg [3:0] CNT2;
	reg [3:0] CNT3;

	// Outputs
	wire [3:0] CNT;

	// Instantiate the Unit Under Test (UUT)
	Selector uut (
		.SW(SW), 
		.CNT1(CNT1), 
		.CNT2(CNT2), 
		.CNT3(CNT3), 
		.CNT(CNT)
	);

	initial begin
		// Initialize Inputs
		
		SW = 2'b00;
		CNT1 = 4'b1010;
		CNT2 = 4'b1100;
		CNT3 = 4'b0011;
		#10;
		SW = 2'b01;
		
		#10;
		SW = 2'b10;
		#10;
		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
      
endmodule

