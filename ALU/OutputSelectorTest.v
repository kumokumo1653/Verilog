`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:30:52 02/12/2021
// Design Name:   OutputSelector
// Module Name:   C:/Users/fjsda/Studying/FPGA/ALU/OutputSelectorTest.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: OutputSelector
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module OutputSelectorTest;

	// Inputs
	reg SW18;
	reg SW22;
	reg [7:0] switches;
	reg [7:0] instruction;
	reg [3:0] index;
	reg [3:0] accumulator;
	reg [3:0] status;

	// Outputs
	wire [3:0] OUT1;
	wire [3:0] OUT2;

	// Instantiate the Unit Under Test (UUT)
	OutputSelector uut (
		.SW18(SW18), 
		.SW22(SW22), 
		.switches(switches), 
		.instruction(instruction), 
		.index(index), 
		.accumulator(accumulator), 
		.status(status), 
		.OUT1(OUT1), 
		.OUT2(OUT2)
	);

	initial begin
		// Initialize Inputs
		instruction = 8'b10100101;
		switches = 8'b00100110;
		index = 4'b1111;
		accumulator = 4'b0011;
		status = 4'b1100;

		// Wait 100 ns for global reset to finish
		SW18 = 0;
		SW22 = 0;
		#100;
		SW22 = 1;
		#100;
		SW18 = 1;
		SW22 = 1;
		#100;
		SW18 = 1;
		SW22 = 0;
		#100;
	end
      
endmodule

