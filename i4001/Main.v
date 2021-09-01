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
	reg [1:0] cnt = 2'b00;
    reg [10:0]input_column_id = 11'b00000000000;
    reg [10:0]debug_column_id = 11'b00000000000;
	reg [4:0] run_column_id = 5'b00000;
    wire [10:0]rom_column_id;
    wire [3:0] read_id;
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
	wire DMD_LOAD;
    wire ENTER;

    wire ROM_CLK;
	reg DEBUG_COLUMN_CLK = 0;
	reg DEBUG_ROM_CLK = 0;
	reg DEBUG_DMD_CLK = 0;
	reg [3:0]debug_read_id = 4'b0000;


	wire RUN_CLK;
	reg RUN_COLUMN_CLK = 0;
	reg RUN_DMD_CLK = 0;
	reg [15:0]run_in = 16'b0000_0000_0000_0000;
	reg [0:1] cycle = 2'b00;
	wire [7:0]instruction;
	wire [3:0]opr;
	wire [3:0]opa;
	reg [11:0]program_counter = 12'b0000_0000_0000;
	reg [3:0]index_register[0:15];
	initial begin
		index_register[0] = 4'b0000;
		index_register[1] = 4'b0000;
		index_register[2] = 4'b0000;
		index_register[3] = 4'b0000;
		index_register[4] = 4'b0000;
		index_register[5] = 4'b0000;
		index_register[6] = 4'b0000;
		index_register[7] = 4'b0000;
		index_register[8] = 4'b0000;
		index_register[9] = 4'b0000;
		index_register[10] = 4'b0000;
		index_register[11] = 4'b0000;
		index_register[12] = 4'b0000;
		index_register[13] = 4'b0000;
		index_register[14] = 4'b0000;
		index_register[15] = 4'b0000;
	end
	reg [3:0]accumulator = 4'b0000;
	reg carry = 1'b0;
	reg RUN_ROM_CLK= 0;
	reg INCREMENT_FLAG = 1;
	reg [3:0]temp = 4'b0000;
	reg [2:0] multi_instruction_mask = 3'b000; //[0]...ISZ[1]...JUN[2]...JCN;
	wire [2:0] condition_mask; //c2--c4の条件の判定c1==0のと�
    
	assign mode = (SWITCH == 0) ? 0 : (in[15] == 1) ? 1 : 2;
	assign ENTER = (mode == 0) ? 1 : 0;
    assign rom_column_id = (mode == 0) ? input_column_id: (mode == 1) ? debug_column_id : program_counter[11:1];
    assign dmd_in = (mode == 0) ? in: (mode == 1) ? rom_output : run_in;
    assign dmd_in_column = (mode == 0) ? input_column_id[4:0] :(mode == 2) ? debug_column_id[4:0] : run_column_id;
	assign DMD_LOAD = (mode == 0) ? MCLK : (mode == 2) ? DEBUG_DMD_CLK : RUN_DMD_CLK;
    assign ROM_CLK = (mode == 0) ? MCLK : (mode == 1) ? DEBUG_ROM_CLK : RUN_ROM_CLK;

	assign read_id = (mode == 1) ? debug_read_id : program_counter[11:8];

    assign seg_d1 = (mode == 0) ? input_page[3:0] : (mode == 1) ? debug_page[3:0] : opa;
    assign seg_d2 = (mode == 0) ? input_page[7:4] : (mode == 1) ? debug_page[7:4] : opr;
    assign seg_d3 = 4'b0000;
    assign seg_d4 = 4'b0000;

	assign RUN_CLK = (in[14] == 0) ? MCLK : MCLK;

	assign instruction = (program_counter[0] == 0) ? byteSwap(rom_output[7:0]) : byteSwap(rom_output[15:8]);
	assign opr = instruction[7:4];
	assign opa = instruction[3:0];
	assign condition_mask = {(accumulator == 4'b0000) ? 1 : 0, (carry == 1) ? 1 : 0, (in[12] == 0) ? 1 : 0};


    always @ (posedge CLK) begin
		if(cnt == 2'b11)begin
			cnt <= 2'b00;
		end else begin	
			cnt <= cnt + 2'b01;
		end
		if(cnt == 2'b00)begin
			DEBUG_COLUMN_CLK <= ~DEBUG_COLUMN_CLK;
			RUN_COLUMN_CLK <= ~RUN_COLUMN_CLK;
		end else if(cnt == 2'b01)begin
			DEBUG_ROM_CLK <= ~DEBUG_ROM_CLK;
		end else if(cnt == 2'b10)begin
			DEBUG_DMD_CLK <= ~DEBUG_DMD_CLK;
			RUN_DMD_CLK <= ~RUN_DMD_CLK;
		end

		if(RESET == 1)begin
			DMD_RESET <= 1;
		end
		if(RESET == 0)begin
			DMD_RESET <= 0;
		end
	end


    always @ (posedge DEBUG_COLUMN_CLK) begin
        if(mode == 1)begin
			if(debug_page * 32 <= debug_column_id && (debug_page + 1) * 32 - 1 > debug_column_id)begin
				debug_column_id <= debug_column_id + 11'b00000000001;
			end else begin
				debug_column_id <= debug_page * 32;
			end
            debug_read_id <= debug_page / 4;
        end 
    end

	always @ (posedge RUN_COLUMN_CLK) begin
		if(mode == 2)begin
			if(run_column_id < 5'b01100)begin
				run_column_id <= run_column_id + 5'b00001;
			end else begin
				run_column_id <= 5'b00000;
			end

		end
	end

	always @(negedge RUN_COLUMN_CLK)begin
		if(mode == 2)begin
			case (run_column_id)
				5'd0: run_in <= {instruction, 8'b0000_0000};
				5'd1: run_in <= {carry, accumulator, 11'b0000_0000_000};
				5'd2: run_in <= 16'b0000_0000_0000_0000;
				5'd3: run_in <= {12'b0000_0000_0000, (cycle == 0) ? 4'b0001 : (cycle == 1) ? 4'b0010 : (cycle == 2) ? 4'b0100 : 4'b1000};
				5'd4: run_in <= {index_register[0], index_register[1],index_register[2], index_register[3]};
				5'd5: run_in <= {index_register[4], index_register[5],index_register[6], index_register[7]};
				5'd6: run_in <= {index_register[8], index_register[9],index_register[10], index_register[11]};
				5'd7: run_in <= {index_register[12], index_register[13],index_register[14], index_register[15]};
				5'd8: run_in <= {program_counter,4'b0000};
				5'd9: run_in <= 16'b0000_0000_0000_0000;
				5'd10: run_in <= 16'b0000_0000_0000_0000;
				5'd11: run_in <= 16'b0000_0000_0000_0000;
			endcase
		end
	end
	 
	always @ (negedge MCLK or posedge RESET)begin
		if(RESET == 1)begin
			if(mode == 0)begin
				input_column_id <= 11'b00000000000;
				input_page <= 8'b0000_0000;
			end
		end else begin
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
	end
	
	always @(posedge MCLK)begin
		if (mode == 1)begin
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

	//runmode	
	always @(posedge RUN_CLK or posedge RESET)begin
		if(RESET == 1)begin
			if(mode == 2)begin
				program_counter <= 12'b0000_0000_0000;
				cycle <= 2'b00;
			end
		end else begin
			if(mode == 2)begin
				if(cycle == 2'b11)begin
					cycle <= 2'b00;
				end else begin	
					cycle <= cycle + 2'b01;
				end	
				if(cycle <= 2'b01)begin
					RUN_ROM_CLK = ~RUN_ROM_CLK;
				end else if(cycle == 2'b10)begin
					//fetch
					if (multi_instruction_mask == 3'b000 &&  opr == 4'b1101)begin
						//LDM
						accumulator <= opa;
						INCREMENT_FLAG <= 1;
					end else if (multi_instruction_mask == 3'b000 && opr == 4'b1011)begin
						//XCH
						index_register[opa] <= accumulator;
						accumulator <= index_register[opa];
						INCREMENT_FLAG <= 1;
					end else if (multi_instruction_mask == 3'b001 || opr == 4'b0111)begin
						//ISZ
						//first8bit
						if(multi_instruction_mask == 3'b000 && opr == 4'b0111)begin
							temp <= opa;
							index_register[opa] <= index_register[opa] + 4'b0001;
							INCREMENT_FLAG <= 1;
							multi_instruction_mask <= 3'b001;
						end else begin 
							//second8bit
							if(index_register[temp] == 4'b0000)begin
								INCREMENT_FLAG <= 1;
							end else begin
								INCREMENT_FLAG <= 0;
								program_counter[7:0] <= instruction;
							end
							multi_instruction_mask <= 3'b000;
						end
					end else if (multi_instruction_mask == 3'b010 || opr == 4'b0100)begin
						//JUN
						//first8bit
						if(multi_instruction_mask == 3'b000 && opr == 4'b0100)begin
							temp <= opa;
							INCREMENT_FLAG <= 1;
							multi_instruction_mask <= 3'b010;
						end else begin 
							//second8bit
							INCREMENT_FLAG <= 0;
							program_counter <= {temp, instruction};
							multi_instruction_mask <= 3'b000;
						end
					end else if (multi_instruction_mask == 3'b000 && opr == 4'b0110)begin
						//INC
						index_register[opa] <= index_register[opa] + 4'b0001;
						INCREMENT_FLAG <= 1;
					end else if (multi_instruction_mask == 3'b000 && opr == 4'b1010)begin
						//LD
						accumulator <= index_register[opa];
						INCREMENT_FLAG <= 1;
					end else if (multi_instruction_mask == 3'b000 && opr == 4'b1000)begin
						//ADD
						{carry, accumulator} <= index_register[opa] + accumulator + carry;
						INCREMENT_FLAG <= 1;
					end else if (multi_instruction_mask == 3'b100 || opr == 4'b0001)begin
						//JCN
						//first8bit
						if(multi_instruction_mask == 3'b000 && opr == 4'b0001)begin
							temp <= opa;
							INCREMENT_FLAG <= 1;
							multi_instruction_mask <= 3'b100;
						end else begin 
							//second8bit
							if(temp[3] == 0)begin
								if(temp[2:0] & condition_mask == 3'b000)begin
									INCREMENT_FLAG <= 1;
								end else begin
									INCREMENT_FLAG <= 0;
									program_counter[7:0] <= instruction;
								end
							end else begin
								if((~temp[2:0]) & (~condition_mask) == 3'b000)begin
									INCREMENT_FLAG <= 1;
								end else begin
									INCREMENT_FLAG <= 0;
									program_counter[7:0] <= instruction;
								end
							end	
							multi_instruction_mask <= 3'b000;
						end
					end else if(multi_instruction_mask == 3'b000 && instruction == 8'b1111_0001)begin
						//CLC
						INCREMENT_FLAG <= 1;
						carry <= 0;
					end else begin
						//NOP or else
						INCREMENT_FLAG <= 1;
					end
				end else if(cycle == 2'b11 && INCREMENT_FLAG == 1)begin
					if(program_counter == 12'b1111_1111_1111)begin
						program_counter <= 12'b0000_0000_0000;
					end else begin
						program_counter <= program_counter + 12'b0000_0000_0001;
					end
				end
			end
		end	
	end
      
	
	//エンヂ�アン変換 big -> little
	function [7:0] byteSwap(input [7:0] in);
		begin
			byteSwap[0] = in[7];
			byteSwap[1] = in[6];
			byteSwap[2] = in[5];
			byteSwap[3] = in[4];
			byteSwap[4] = in[3];
			byteSwap[5] = in[2];
			byteSwap[6] = in[1];
			byteSwap[7] = in[0];
		end
	endfunction

		//rom ....clk, read_id
    //matrix column_id, load, in_column
    Rom rom(.CLK(ROM_CLK), .column_id(rom_column_id), .read_id(read_id), .in(in), .out(rom_output), .mode(mode));
    Segment7 seg7(.CLK(CLK), .IN_CLR(1'b1), .D1(seg_d1), .D2(seg_d2), .D3(seg_d3), .D4(seg_d4), .PATTERN(seg_pattern), .DIGIT(seg_digit));
    Matrix matrix(.column_id(dmd_in_column), .in_column(dmd_in), .CLK(CLK), .IN_CLR(1'b0), .LOAD(DMD_LOAD), .RESET(DMD_RESET), .column_seg(dmd_seg), .out_column(dmd_column), .COLUMN_CLK(DMD_CLK), .OUT_CLR(DMD_CLR));
endmodule
