`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:48:51 02/12/2021 
// Design Name: 
// Module Name:    ADD 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ADD(input [3:0]A,input [3:0]B,output reg [15:0]result,output reg [15:0]acc_status);

	wire S;
	wire Ci;
	wire Co;
	integer i;
	
	assign result[15:0] = 16'b0;
	assign acc_status[15:0] = 16'b0;
	
	HA ha1(A[0],B[0],S,C);
	assign result[0] = S;
	
	for (i = 1; i < 4 ; i = i + 1)
	begin
		FA fa(.A(A[i]),.B(B[i]),.Ci(Ci),.S(S),.Co(Co));
		assign Ci = Co;
		assign result[i] = S;
	end
	
	assign result[4] = Co;

endmodule
