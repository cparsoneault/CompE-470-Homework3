`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Question3
//////////////////////////////////////////////////////////////////////////////////
module counter(rst, clk, count);
parameter M = 9;	//max value
parameter N = 4;	//max bit-width
input rst, clk;	//reset signal and clock
output reg [N-1:0]count;	//counter
always@(posedge clk) begin
	if (rst)
		count = 0;
	else
		count = (count < M) ? (count + 1) : 0;
end

endmodule

module tb_counter;
	reg rst, clk;
	wire [3:0]count;
	counter test1 (rst, clk, count);
	always begin
		clk = 0;
		#5 clk = 1;
		#5;
	end
	initial begin
		rst = 1;
		#7 rst = 0;
		#33 rst = 1;
		#7 rst = 0;
	end
endmodule
