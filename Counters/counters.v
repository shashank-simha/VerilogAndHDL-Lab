`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:02:50 02/12/2019 
// Design Name: 
// Module Name:    counters 
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
module binary_up(
input clk,
	output reg [3:0]q
    );
	initial 
	q = 4'b0000;
	always @(negedge clk)
	q = q + 4'b0001;
endmodule

module binary_down(
input clk,
	output reg [3:0]q
    );
	initial 
	q = 4'b1111;
	always @(negedge clk)
	q = q - 4'b0001;
endmodule


// BCD UP DOWN
module bcd_up_down(input clk, s, [3:0]i, [3:0]e, output reg [3:0]q);
initial
q = 4'b0000;
always @(negedge clk) 
begin
	if(s == 0)
		begin
			q = q + 4'b0001;
			if(q == e)
			begin
				q = i;
			end 
		end
   else
		begin
			q = q - 4'b0001;
			if(q == e)
			begin
				q = i;
			end 
		end
end
endmodule 

module bcd_up(input clk, [3:0]i, [3:0]e, output reg [3:0]q);
initial 
	begin
		q = 4'b0000;
	end

always @(negedge clk)
	begin
		q = q + 4'b0001;
		if(q == e)
			begin
				q = i;
			end 
	end 
endmodule 



module bcd_down(input clk, [3:0]i, [3:0]e, output reg [3:0]q);
initial 
	begin
		q = i;
	end

always @(negedge clk)
	begin
		q = q - 4'b0001;
		if(q == e)
			begin
				q = i;
			end 
	end 
endmodule 