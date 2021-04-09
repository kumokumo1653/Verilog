`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:59:43 02/12/2021 
// Design Name: 
// Module Name:    ADD16 
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
module ADD16(input [15:0]A,input [15:0]B,output reg [15:0]result,output reg [15:0]acc_status);

	wire S;
	wire Ci;
	wire Co;
	integer i;
	
	HA ha16(A[0],B[0],S,C);
	assign result[0] = S;
	
	for (i = 1; i < 16 ; i = i + 1)
	begin
		FA fa16(.A(A[i]),.B(B[i]),.Ci(Ci),.S(S),.Co(Co));
		assign Ci = Co;
		assign result[i] = S;
	end
	
endmodule
