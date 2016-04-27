`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Question 1
//////////////////////////////////////////////////////////////////////////////////
module MUX2to1_enable(input rst, clk, d, en,
							 output reg q);	
										//rst is an active-high reset signal, clk is clock signal
										//d is the input data, en is the active-low enable signal on the MUX
										//q is the output
wire temp;
assign temp = (en ? d:q);
always@ (posedge clk or posedge rst)
	if (rst)
		q <= 1'b0;
	else
		q <= temp;
endmodule

module tb_MUX2to1_enable;
	wire q;
	reg rst, clk, d, en;
	MUX2to1_enable test1 (rst, clk, d, en, q);
	initial begin
	rst = 1'b1;
	d = 0;
	en = 0;
	clk = 0;
	#5 clk = ~clk;
	#2 rst = ~rst;
		d = ~d;
	#3 clk = ~clk;
		en = ~en;
	#5 clk = ~clk;
	#2 en = ~en;
		d = ~d;
	#3 clk = ~clk;
	#5 clk = ~clk;
	#5 clk = ~clk;
	end
endmodule
	