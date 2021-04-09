`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:37:38 02/12/2021 
// Design Name: 
// Module Name:    MUL 
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
module MUL(input [3:0]A,input [3:0]B,output reg [15:0]result,output reg [15:0]acc_status);

	integer i;
	integer j;
	wire [15:0] ans;
	assign ans = 16'b0;
	assign result[15:0] = 16'b0;
	assign acc_status[15:0] = 16'b0;
	case(B)
		4'b0000: assign i = 0;
		4'b0001:	assign i = 1;
		4'b0010:	assign i = 2;
		4'b0011:	assign i = 3;
		4'b0100:	assign i = 4;
		4'b0101:	assign i = 5;
		4'b0110:	assign i = 6;
		4'b0111:	assign i = 7;
		4'b1000:	assign i = 8;
		4'b1001:	assign i = 9;
		4'b1010: assign i = 10;
		4'b1011: assign i = 11;
		4'b1100: assign i = 12;
		4'b1101: assign i = 13;
		4'b1110: assign i = 14;
		4'b1111: assign i = 15;
		default: assign i = 0;
	endcase
	
	for (j = 0; j < i ; j = j+1)
	begin
		ADD mul_add(.A(A),.B(B),.result(ans),.acc_status(acc_status));
		ADD16 add16(.A(result),.B(ans),.result(result),.acc_status(acc_status));
	end


endmodule
