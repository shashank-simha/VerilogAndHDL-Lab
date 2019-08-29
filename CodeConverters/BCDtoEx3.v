`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:30:27 02/05/2019 
// Design Name: 
// Module Name:    BCDtoEx3 
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
module BCDtoEx3(
	input [3:0]b,
	output [3:0]e
    );
	reg [3:0]e;
	
	always @ (b)

	begin
		e[3] = b[3] | (b[2] & (b[1] | b[0]));
		e[2] = ((~b[2]) & (b[1] | b[0])) | (b[2] & (~b[1]) & (~b[0]));
		e[1] = ~(b[1] ^ b[0]);
		e[0] = ~b[0];
	end
	
endmodule
