`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:27:58 02/09/2021
// Design Name:   InstructionDecoder
// Module Name:   C:/Users/fjsda/Studying/FPGA/ALU/InstructionDecoderTest.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InstructionDecoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module InstructionDecoderTest;

	// Inputs
	reg [7:0] instruction;

	// Outputs
	wire [1:0] mode;
	wire [3:0] index;
	wire [3:0] status;
	wire [3:0] accumulator;
	wire processing;

	// Instantiate the Unit Under Test (UUT)
	InstructionDecoder uut (
		.instruction(instruction), 
		.mode(mode), 
		.index(index), 
		.status(status), 
		.accumulator(accumulator), 
		.processing(processing)
	);

	initial begin
		// Initialize Inputs
		instruction = 8'b00011010;
		#100;
		instruction = 8'b00100000;
		#100;
		instruction = 8'b00010011;
		#100;
		instruction = 8'b01000000;
		#100;
		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
      
endmodule

