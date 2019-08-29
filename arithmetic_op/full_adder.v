`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:39:30 01/29/2019 
// Design Name: 
// Module Name:    full_adder 
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
`include "half_adder.v"

module full_adder(
    input a,
    input b,
    input c,
    output sum,
    output carry
    );
	
	wire s1,c1,c2;
	
	half_adder h1(a,b,s1,c1);
	half_adder h2(s1,c,sum,c2);
	
	assign carry = c1 | c2;

	//assign sum = a^b^c;
	//assign carry = (a & b) | (b & c) | (c & a);
	
endmodule
