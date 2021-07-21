`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:33:13 07/21/2021
// Design Name:   Rom
// Module Name:   C:/Users/kumomomo/Studying/5J/Verilog/i4001/romTest.v
// Project Name:  i4001
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Rom
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module romTest;

	// Inputs
	reg CLK;
	reg [10:0] column_id;
	reg [3:0] read_id;
	reg [15:0] in;
	reg [1:0] mode;

	// Outputs
	wire [15:0] out;

	// Instantiate the Unit Under Test (UUT)
	Rom uut (
		.CLK(CLK), 
		.column_id(column_id), 
		.read_id(read_id), 
		.in(in), 
		.out(out), 
		.mode(mode)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		column_id = 11'b00000000000;
		read_id = 4'b0000;
		in = 16'b0000_0000_0000_0000;
		mode = 2'b00;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here
		
	end
   
	always begin
		#10 CLK = ~CLK;
	end
	
	always begin
		if(column_id == 11'b11111111111)begin
			mode = 2'b01;
		end
	
		#20 column_id = column_id + 11'b00000000001;
		in = in + 16'b0000000000000001;
		read_id = column_id[10:7];
	end
endmodule

