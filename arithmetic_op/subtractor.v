`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:17:13 01/29/2019 
// Design Name: 
// Module Name:    subtractor 
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
`include "half_subtractor.v"
module subtractor(
    input a,
    input b,
    input c,
    output diff,
    output borrow
    );
	
	wire d1,b1,b2;
	half_subrator hs1(b,c,d1,b1);
	half_subrator hs2(a,d1,diff,b2);

	or(borrow,b1,b2);
	
endmodule
