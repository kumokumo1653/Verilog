`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:06:27 02/12/2021 
// Design Name: 
// Module Name:    DivideForDynamicLighting 
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
module DivideForDynamicLighting(input CLK,output reg [1:0]CEOUT);

	integer count = 0;
	integer out_count = 0;
	
	always @(posedge CLK)
	begin 
		count = count + 1;
		if (count == 20000)
		begin
			count = 0;
			out_count = out_count + 1;
			CEOUT <= out_count[1:0];
		end
	end



endmodule
