`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:39:16 07/16/2021 
// Design Name: 
// Module Name:    Main 
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
module Main(CLK, in, MCLK, SWITCH, RESET, seg_pattern, seg_digit, DMD_CLR, dmd_seg, dmd_column, DMD_CLK);
    input CLK, MCLK, SWITCH, RESET;
    input [15:0] in;//sw1--sw16
    output [7:0]seg_pattern;
    output [3:0]seg_digit;
    output DMD_CLK, DMD_CLR;
    output [3:0]dmd_seg;
    output [15:0]dmd_column;

    reg [1:0]mode = 2'b00;//0...input 1...run 2...debug
    reg [10:0]column_id = 11'b00000000000;
    reg [3:0] read_id = 4'b0000;
    reg [15:0] rom_out = 16'b0000_0000_0000_0000;
    
    always @ (SWITCH or in[15])begin
        //mode input
        if(SWITCH == 0)begin
            mode <= 0;
        end
        //mode run
        else if(in[15] == 0) begin
            mode <= 1;
        end
        //mode ddebug
        else begin
            mode <= 2;
        end
    end

    
    always @ (negedge MCLK)begin
        //mode input
        if(mode == 0)begin
            if(column_id == 11'b11111111111)begin
                column_id <= 11'b00000000000;
            end else begin
                column_id <= column_id + 11'b00000000001;
            end
            
        end
    end

    Rom rom(.CLK(MCLK), .column_id(column_id), .read_id(read_id), .in(in), .out(rom_out), .mode(mode));
    Segment7 seg7(.CLK(CLK), .IN_CLR, .D1, .D2, .D3, .D4, .PATTERN(seg_pattern), .DIGIT(seg_digit));
    Matrix matrix(.column_id, .in_column, .CLK(CLK), .IN_CLR, .LOAD, .RESET, .column_seg(dmd_seg), .out_column(dmd_column), .COLUMN_CLK(DMD_CLK), .OUT_CLR(DMD_CLR));
endmodule
