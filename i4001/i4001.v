`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:39:57 07/16/2021 
// Design Name: 
// Module Name:    i4001 
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
module i4001(CLK, WE, address, in, out);
	input CLK, WE;
	input [6:0]address;
	input [15:0]in;
	output [15:0]out;
	BlockRam4001 ram(.clka(CLK), .wea(WE), .addra(address), .dina(in), .douta(out));
	//アドレス変化でそのアドレスの中身をoutに出力
	//weが1なら書き込みも行う
endmodule
