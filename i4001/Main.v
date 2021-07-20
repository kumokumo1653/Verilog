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
    reg [7:0] input_page = 8'b0000_0000;
    reg [7:0] debug_page = 8'b0000_0000;
    wire [15:0] rom_out = 16'b0000_0000_0000_0000;

    reg [3:0]seg_d1 = 4'b0000;
    reg [3:0]seg_d2 = 4'b0000;
    reg [3:0]seg_d3 = 4'b0000;
    reg [3:0]seg_d4 = 4'b0000;

    reg [15:0]dmd_in = 16'b0000_0000_0000_0000;
    reg [4:0]dmd_in_column = 5'b00000;
    reg ENTER = 1;
    
    always @ (SWITCH or in[15])begin
        //mode input
        if(SWITCH == 0)begin
            mode <= 0;
            ENTER <= 1;
        end
        //mode run
        else if(in[15] == 0) begin
            mode <= 1;
            ENTER <= 0;
        end
        //mode ddebug
        else begin
            mode <= 2;
            ENTER <= 0;
        end
    end

    
    always @ (negedge MCLK)begin
        //mode input
        if(mode == 0)begin
            if(column_id == 11'b11111111111)begin
                column_id <= 11'b00000000000;
                input_page <= 8'b0000_0000;
            end else begin
                column_id <= column_id + 11'b00000000001;
                if(column_id % 32 == 0)begin
                    input_page <= input_page + 8'b0000_0001;
                end
                
            end


            seg_d1 <= input_page[3:0];
            seg_d2 <= input_page[7:4];
            seg_d3 <= 4'b0000;
            seg_d4 <= 4'b0000;

            dmd_in <= in;
            dmd_in_column <= column_id[4:0];
            
        end else if(mode == 1 || mode == 2)begin
            //mode debug
            if(in[12] == 0)begin
                //i4001
                if(in[13] == 1)begin
                    //pageUp
                    if(debug_page == 63)begin
                        debug_page <= 8'b0000_0000;
                    end else begin
                        debug_page <= debug_page + 8'b0000_0001;
                    end
                end else if(in[13] == 0)begin
                    //pageDown
                    if(debug_page == 0)begin
                        debug_page <= 8'b0011_1111;
                    end else begin
                        debug_page <= debug_page - 8'b0000_0001;
                    end
                end

                seg_d1 <= debug_page[3:0];
                seg_d2 <= debug_page[7:4];
                seg_d3 <= 4'b0000;
                seg_d4 <= 4'b0000;

            end
        end
    end

    //rom ....clk, read_id
    //matrix column_id, load, in_column
    Rom rom(.CLK(MCLK), .column_id(column_id), .read_id(read_id), .in(in), .out(rom_out), .mode(mode));
    Segment7 seg7(.CLK(CLK), .IN_CLR(1'b1), .D1(seg_d1), .D2(seg_d2), .D3(seg_d3), .D4(seg_d4), .PATTERN(seg_pattern), .DIGIT(seg_digit));
    Matrix matrix(.column_id(dmd_in_column), .in_column(dmd_in), .CLK(CLK), .IN_CLR(1'b1), .LOAD(MCLK & ENTER), .RESET(1'b0), .column_seg(dmd_seg), .out_column(dmd_column), .COLUMN_CLK(DMD_CLK), .OUT_CLR(DMD_CLR));
endmodule
