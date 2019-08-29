`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Shashank
// 
// Create Date:    14:47:01 01/29/2019 
// Design Name: 
// Module Name:    lgate_structural 
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
module lgate_structural(
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
	 
and(c, a, b); // and
or(d, a, b); // or
xor(e, a, b); // xor
nand(f, a, b); // nand
nor(g, a, b); // nor
xnor(h, a, b); // xnor
not(i, a); // not
endmodule
