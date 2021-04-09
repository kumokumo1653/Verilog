`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:12:48 02/12/2021 
// Design Name: 
// Module Name:    Selector 
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
module Selector(input[3:0]CNT1,input [3:0]CNT2,input [3:0]CNT3,input [3:0]CNT4,input [1:0]SELECT,output reg [3:0]CNT);

	always @(SELECT[0])
	begin 
		case (SELECT) 
			2'b00: CNT <= CNT1;
			2'b01: CNT <= CNT2;
			2'b10: CNT <= CNT3;
			2'b11: CNT <= CNT4;
		endcase
	end


endmodule
