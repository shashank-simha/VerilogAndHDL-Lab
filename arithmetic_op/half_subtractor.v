`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:45:12 02/05/2019 
// Design Name: 
// Module Name:    half_subtractor 
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
module half_subtractor(
	 input a,
    input b,
    output diff,
    output borrow
	);
	
	assign diff = a ^ b;
	assign borrow = a & b;
	
endmodule
