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

    wire [1:0]mode;//0...input 1...run 2...debug
    reg [10:0]input_column_id = 11'b00000000000;
    reg [10:0]debug_column_id = 11'b00000000000;
    wire [10:0]rom_column_id;
    reg [3:0] read_id = 4'b0000;
    reg [7:0] input_page = 8'b0000_0000;
    reg [7:0] debug_page = 8'b0000_0000;
	 
	 reg DMD_RESET = 0;
    wire [15:0] rom_output;

    wire [3:0]seg_d1;
    wire [3:0]seg_d2;
    wire [3:0]seg_d3;
    wire [3:0]seg_d4;

    wire [15:0]dmd_in;
    wire [4:0]dmd_in_column;
    wire ENTER;

    wire ROM_CLK;
    
	 assign mode = (SWITCH == 0) ? 0 : (in[15] == 0) ? 1 : 2;
	 assign ENTER = (mode == 0) ? 1 : 0;
    assign rom_column_id = (mode == 0) ? input_column_id: debug_column_id;
    assign dmd_in = (mode == 0) ? in: rom_output;
    assign dmd_in_column = (mode == 0) ? input_column_id[4:0]: debug_column_id[4:0];
    assign ROM_CLK = (mode == 0) ? MCLK : CLK;

    assign seg_d1 = (mode == 0) ? input_page[3:0] : debug_page[3:0];
    assign seg_d2 = (mode == 0) ? input_page[7:4] : debug_page[7:4];
    assign seg_d3 = 4'b0000;
    assign seg_d4 = 4'b0000;


    always @ (negedge CLK) begin
        if(mode == 1 || mode == 2)begin
				 if(debug_page * 32 <= debug_column_id && (debug_page + 1) * 32 > debug_column_id)begin
					  debug_column_id <= debug_column_id + 11'b00000000001;
				 end else begin
					  debug_column_id <= debug_page * 32;
				 end
            read_id <= debug_page / 4;
				
        end
    end
	 
	always @ (negedge MCLK)begin
		if(mode == 0)begin
				input_column_id <= input_column_id + 11'b00000000001;
				 if(input_column_id == 11'b11111111111)begin
					  input_column_id <= 11'b00000000000;
					  input_page <= 8'b0000_0000;
				 end else begin
					
					if((input_column_id + 1) % 32 == 0)begin
						input_page <= input_page + 8'b0000_0001;

					end
					  
				 end	
		end 
	end
	
	always @(posedge MCLK)begin
		if (mode == 1 || mode == 2)begin
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


				end
			end
	end
      

		//rom ....clk, read_id
    //matrix column_id, load, in_column
    Rom rom(.CLK(ROM_CLK), .column_id(rom_column_id), .read_id(read_id), .in(in), .out(rom_output), .mode(mode));
    Segment7 seg7(.CLK(CLK), .IN_CLR(1'b1), .D1(seg_d1), .D2(seg_d2), .D3(seg_d3), .D4(seg_d4), .PATTERN(seg_pattern), .DIGIT(seg_digit));
    Matrix matrix(.column_id(dmd_in_column), .in_column(dmd_in), .CLK(CLK), .IN_CLR(1'b0), .LOAD(MCLK), .RESET(DMD_RESET), .column_seg(dmd_seg), .out_column(dmd_column), .COLUMN_CLK(DMD_CLK), .OUT_CLR(DMD_CLR));
endmodule
