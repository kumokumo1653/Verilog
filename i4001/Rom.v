`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:45:20 07/16/2021 
// Design Name: 
// Module Name:    Rom 
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
module Rom(CLK, column_id, read_id, in, out, mode);
    input CLK;
    input [10:0]column_id;
    input [3:0]read_id;
    input [15:0]in;
    input [1:0]mode;
    output [15:0]out;
    
    wire [15:0]rom_outs[0:15];
    wire [15:0]we;

    
    SelectorRom selector(.selector(column_id[10:7]), .mode(mode), .column(we));

    i4001 r0(.CLK(CLK), .WE(we[0]), .address(column_id[6:0]), .in(in), .out(rom_outs[0]));
    i4001 r1(.CLK(CLK), .WE(we[1]), .address(column_id[6:0]), .in(in), .out(rom_outs[1]));
    i4001 r2(.CLK(CLK), .WE(we[2]), .address(column_id[6:0]), .in(in), .out(rom_outs[2]));
    i4001 r3(.CLK(CLK), .WE(we[3]), .address(column_id[6:0]), .in(in), .out(rom_outs[3]));
    i4001 r4(.CLK(CLK), .WE(we[4]), .address(column_id[6:0]), .in(in), .out(rom_outs[4]));
    i4001 r5(.CLK(CLK), .WE(we[5]), .address(column_id[6:0]), .in(in), .out(rom_outs[5]));
    i4001 r6(.CLK(CLK), .WE(we[6]), .address(column_id[6:0]), .in(in), .out(rom_outs[6]));
    i4001 r7(.CLK(CLK), .WE(we[7]), .address(column_id[6:0]), .in(in), .out(rom_outs[7]));
    i4001 r8(.CLK(CLK), .WE(we[8]), .address(column_id[6:0]), .in(in), .out(rom_outs[8]));
    i4001 r9(.CLK(CLK), .WE(we[9]), .address(column_id[6:0]), .in(in), .out(rom_outs[9]));
    i4001 r10(.CLK(CLK), .WE(we[10]), .address(column_id[6:0]), .in(in), .out(rom_outs[10]));
    i4001 r11(.CLK(CLK), .WE(we[11]), .address(column_id[6:0]), .in(in), .out(rom_outs[11]));
    i4001 r12(.CLK(CLK), .WE(we[12]), .address(column_id[6:0]), .in(in), .out(rom_outs[12]));
    i4001 r13(.CLK(CLK), .WE(we[13]), .address(column_id[6:0]), .in(in), .out(rom_outs[13]));
    i4001 r14(.CLK(CLK), .WE(we[14]), .address(column_id[6:0]), .in(in), .out(rom_outs[14]));
    i4001 r15(.CLK(CLK), .WE(we[15]), .address(column_id[6:0]), .in(in), .out(rom_outs[15]));
	 
	 assign out = rom_outs[read_id];
	 
	 

	
endmodule
