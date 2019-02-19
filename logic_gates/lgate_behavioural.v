`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:14:29 01/29/2019 
// Design Name: 
// Module Name:    lgate_behavioural 
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
module lgate_behavioural(
    input a,
    input b,
    output c,
    output d,
    output e,
    output f,
    output g,
    output h,
    output i
    );
	 
	 reg c, d, e, f, g, h, i;
	 always @ (a, b)
	 begin
		c = a & b;
		d = a | b;
		e = a ^ b;
		f = ~(a & b);
		g = ~(a | b);
		h = ~(a ^ b);
		i = ~a;
	 end
endmodule
