`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Question4
//////////////////////////////////////////////////////////////////////////////////
module Question4(clk, a, b, mult);
parameter N = 4;
input clk;	//clock signal
input [N-1:0] a, b;	//the two numbers being multiplied together
output [(2*N-1):0] mult;	//the result of the multiplication, twice as many bits as the inputs
wire [N-1:0] aout, bout;	//intermediate wires, values from a and b passed to multiplier
wire [(2*N-1):0] value, q1, q2;	//output of multiplier, and output of flipflops
flipFlopQ4 #(.N(N)) a1 (.clk(clk), .in(a), .out(aout)),
						  b1(.clk(clk), .in(b), .out(bout));
flipFlopQ4 #(.N(2*N)) q01 (.clk(clk), .in(value), .out(q1)),
							 q02 (.clk(clk), .in(q1), .out(q2)),
							 q03 (.clk(clk), .in(q2), .out(mult));
multiplyQ4 #(.N(N)) m1 (.op1(aout), .op2(bout), .multout(value));
endmodule

module tb_Question4;
	reg clk;
	reg [3:0] a, b;
	wire [7:0] mult;
	Question4 test1 (.clk(clk), .a(a), .b(b), .mult(mult));
	always begin
		clk = 0;
		#5 clk = 1;
		#5;
	end
	initial begin
		a = 4'b0010;
		b = 4'b1111;
		#10 a = 4'b1010;
			b = 4'b0111;
		#10 a = 4'b0111;
			b = 4'b0111;
		#10 a = 4'b1010;
			b = 4'b1100;
	end
endmodule

module flipFlopQ4 (clk, in, out);
parameter N = 4;
input clk;
input [N-1:0]in;
output reg [N-1:0]out;
always @ (posedge clk)
	out = in;
endmodule

module multiplyQ4 (op1, op2, multout);
parameter N = 4;
input [N-1:0]op1, op2;
output [2*N-1:0] multout;
assign multout = op1 * op2;
endmodule
