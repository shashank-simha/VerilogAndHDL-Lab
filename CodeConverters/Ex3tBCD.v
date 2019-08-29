`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:08:01 02/05/2019 
// Design Name: 
// Module Name:    Ex3tBCD 
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
module Ex3tBCD(
	input [3:0]e,
	output [3:0]b
    );
	reg [3:0]b;
	
	always @ (e)

	begin
		b[3] = e[3] & (e[2] | (e[1] & e[0]));
		b[2] = ((~e[2]) & (~e[1])) | (e[2] & e[1] & e[0]) | ((~e[2]) & (~e[0]));
		b[1] = e[1] ^ e[0];
		b[0] = ~e[0];
	end

endmodule
