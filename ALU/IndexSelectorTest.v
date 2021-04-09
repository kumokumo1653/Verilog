`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:48:04 02/08/2021
// Design Name:   IndexSelector
// Module Name:   C:/Users/fjsda/Studying/FPGA/ALU/IndexSelectorTest.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IndexSelector
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IndexSelectorTest;

	// Inputs
	reg [7:0] Switches;

	// Outputs
	wire [2:0] Index;

	// Instantiate the Unit Under Test (UUT)
	IndexSelector uut (
		.Switches(Switches), 
		.Index(Index)
	);

	initial begin
		// Initialize Inputs
		Switches = 8'b00000001;
		#10;
		Switches = 8'b00000010;
		#10;
		Switches = 8'b00000100;
		#10;
		Switches = 8'b00001000;
		#10;
		Switches = 8'b00010000;
		#10;
		Switches = 8'b00100000;
		#10;
		Switches = 8'b01000000;
		#10;
		Switches = 8'b10000000;
		#10;
        
		// Add stimulus here

	end
      
endmodule

