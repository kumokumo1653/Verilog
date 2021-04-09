`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:38:45 01/06/2021
// Design Name:   Decoder
// Module Name:   C:/Users/fjsda/Studying/FPGA/Segment7/DecoderTest.v
// Project Name:  Segment7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Decoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DecoderTest;

	// Inputs
	reg [3:0] IN;

	// Outputs
	wire [7:0] OUT;

	// Instantiate the Unit Under Test (UUT)
	Decoder uut (
		.IN(IN), 
		.OUT(OUT)
	);

	initial begin
		// Initialize Inputs
		IN = 4'b0000;

		// Wait 100 ns for global reset to finish
		#10;
      IN = 4'b0001;
		#10;
      IN = 4'b0010;
		#10;
      IN = 4'b0011;
		#10;
      IN = 4'b0100;
		#10;
      IN = 4'b0101;
		#10;
      IN = 4'b0110;
		#10;
      IN = 4'b0111;
		#10;
      IN = 4'b1000;
		#10;
      IN = 4'b1001;
		#10;
		// Add stimulus here

	end
      
endmodule

