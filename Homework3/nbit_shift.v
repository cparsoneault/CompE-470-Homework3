`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Question 2
//////////////////////////////////////////////////////////////////////////////////
module nbit_shift #(parameter WIDTH = 2)
						(input clk, sinR, sinL,
						 input [3:0] opCode,
						 input [WIDTH-1:0] din,
						 output reg soutR, soutL,
						 output reg [WIDTH-1:0] value);
						 //clk is the clock, sinR and sinL are 1-bit signals
						 //opCode is a number representing which operation to perform
						 //din is an n-bit input
						 //soutR and soutL are 1-bit outputs
						 //value is an n-bit signal output that is the result of
						 //the operation specified by opCode on din
always@(posedge clk)
	case (opCode)
		4'b0000: value = 1'b0; 
		//rst value, opCode = 0
		
		4'b0001:	value = din << 1; 
		//shift left, opCode = 1
		
		4'b0010: value = din >> 1; 
		//shift right, opCode = 2
		
		4'b0011:	value = din >>> 1;	
		//shift right arithmetic, opCode = 3
		
		4'b0100:	value = {din[WIDTH-2:0], din[WIDTH-1]};
		//rotate left, opCode = 4
		
		4'b0101:	value = {din[0], din[WIDTH-1:1]};
		//rotate right, opCode = 5
		
		4'b0110: begin
					value = {din[WIDTH-2:0], sinR};
					soutL = din[WIDTH-1];
					end
		//shift in from the right with input, output bit shifted out left, opCode = 6
		
		4'b0111: begin
					value = {sinL, din[WIDTH-1:1]};
					soutR = din[0];
					end
		//shift in from the left with input, output is lsb shifted right, opCode = 7
		
		4'b1000: value = value;
		//hold current value, opCode = 8
		
		4'b1001: value = din;
		//load new value, opCode = 9
		
		default: value = 1'bx;
		endcase
		
endmodule

module tb_nbit_shift;
	wire soutR, soutL;
	wire [7:0] value;
	reg sinR, sinL, clk;
	reg [7:0] din;
	reg [3:0] opCode;
	integer i;
	nbit_shift #(.WIDTH(8))
					test1 (.clk(clk), .sinR(sinR), .sinL(sinL),
							 .opCode(opCode), .din(din), .soutR(soutR),
							 .soutL(soutL), .value(value));
	initial begin
		din = 8'b10101010;
		clk = 0;
		sinR = 1'b1;
		sinL = sinR;
		opCode = 0;
		#2 opCode = 9;
		#3 clk = ~clk;
		#2 opCode = 0;
		#3 clk = ~clk;
		for (i = 0; i < 9; i = i+1) begin
			#5 clk = ~clk;
			#2 opCode = opCode + 1;
			#3 clk = ~clk;
		end
		din = 8'b11110000;
		forever
			#5 clk = ~clk;
	end
endmodule	
