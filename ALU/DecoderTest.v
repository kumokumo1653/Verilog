`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:19:06 02/08/2021
// Design Name:   Decoder
// Module Name:   C:/Users/fjsda/Studying/FPGA/ALU/DecoderTest.v
// Project Name:  ALU
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

	integer i = 0;
	initial begin
		// Initialize Inputs
		IN = 0;

		// Wait 100 ns for global reset to finish
		// Add stimulus here
		for(i = 0; i < 16;i = i + 1)begin
			IN = i;
			#10;
		end

	end
	
		
        
      
endmodule

