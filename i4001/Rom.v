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
    
    reg [15:0]rom_out[0:15];
    reg [15:0]we = 16'b0000_0000_0000_0000;

    initial begin
        rom_out[0] = 16'b0000_0000_0000_0000;
        rom_out[1] = 16'b0000_0000_0000_0000;
        rom_out[2] = 16'b0000_0000_0000_0000;
        rom_out[3] = 16'b0000_0000_0000_0000;
        rom_out[4] = 16'b0000_0000_0000_0000;
        rom_out[5] = 16'b0000_0000_0000_0000;
        rom_out[6] = 16'b0000_0000_0000_0000;
        rom_out[7] = 16'b0000_0000_0000_0000;
        rom_out[8] = 16'b0000_0000_0000_0000;
        rom_out[9] = 16'b0000_0000_0000_0000;
        rom_out[10] = 16'b0000_0000_0000_0000;
        rom_out[11] = 16'b0000_0000_0000_0000;
        rom_out[12] = 16'b0000_0000_0000_0000;
        rom_out[13] = 16'b0000_0000_0000_0000;
        rom_out[14] = 16'b0000_0000_0000_0000;
        rom_out[15] = 16'b0000_0000_0000_0000;
    end


    assign out = rom_out[read_id];
    SelectorRom selector(.selector(column_id[10:7]), .mode(mode), .out(we));

    i40001 r0(.CLK(CLK), .WE(we[0]), .address(column_id[6:0]), .in(in), .out(rom_out[0]));
    i40001 r1(.CLK(CLK), .WE(we[1]), .address(column_id[6:0]), .in(in), .out(rom_out[1]));
    i40001 r2(.CLK(CLK), .WE(we[2]), .address(column_id[6:0]), .in(in), .out(rom_out[2]));
    i40001 r3(.CLK(CLK), .WE(we[3]), .address(column_id[6:0]), .in(in), .out(rom_out[3]));
    i40001 r4(.CLK(CLK), .WE(we[4]), .address(column_id[6:0]), .in(in), .out(rom_out[4]));
    i40001 r5(.CLK(CLK), .WE(we[5]), .address(column_id[6:0]), .in(in), .out(rom_out[5]));
    i40001 r6(.CLK(CLK), .WE(we[6]), .address(column_id[6:0]), .in(in), .out(rom_out[6]));
    i40001 r7(.CLK(CLK), .WE(we[7]), .address(column_id[6:0]), .in(in), .out(rom_out[7]));
    i40001 r8(.CLK(CLK), .WE(we[8]), .address(column_id[6:0]), .in(in), .out(rom_out[8]));
    i40001 r9(.CLK(CLK), .WE(we[9]), .address(column_id[6:0]), .in(in), .out(rom_out[9]));
    i40001 r10(.CLK(CLK), .WE(we[10]), .address(column_id[6:0]), .in(in), .out(rom_out[10]));
    i40001 r11(.CLK(CLK), .WE(we[11]), .address(column_id[6:0]), .in(in), .out(rom_out[11]));
    i40001 r12(.CLK(CLK), .WE(we[12]), .address(column_id[6:0]), .in(in), .out(rom_out[12]));
    i40001 r13(.CLK(CLK), .WE(we[13]), .address(column_id[6:0]), .in(in), .out(rom_out[13]));
    i40001 r14(.CLK(CLK), .WE(we[14]), .address(column_id[6:0]), .in(in), .out(rom_out[14]));
    i40001 r15(.CLK(CLK), .WE(we[15]), .address(column_id[6:0]), .in(in), .out(rom_out[15]));

	
endmodule
