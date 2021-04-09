`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:52:24 02/12/2021 
// Design Name: 
// Module Name:    DIV 
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
module DIV(input [3:0]A,input [3:0]B,output reg [15:0]result,output reg [15:0]acc_status);

	integer i;
	integer j;
	wire [3:0]count;
	wire [3:0]A_temp;
	assign count[3:0] = 4'b0;
	
	assign result[15:0] = 16'b0;
	assign acc_status[15:0] = 16'b0;
	
	if(B != 0)
	begin
		for(j = 0; A > B ; count = count + 4'b1)
		begin
			SUB4 sub4(A,B,A_temp);
			assign A = A_temp;
		end
		assign result[3:0] = count;
		assign acc_status[7:4] = count;
	end else begin
		assign acc_status[15:0] = 16'b1;
	end
endmodule
