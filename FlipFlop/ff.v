`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:59:04 02/12/2019 
// Design Name: 
// Module Name:    ff 
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
module FF_SR(
	input S,R,clk,
	output reg q,qb
    );
	initial
		begin
			q=1'b0;
			qb=1'b1;
		end
		
	always @(negedge clk)
		begin
			casex({S,R})
				{1'b0,1'b0}: begin q=q; qb=qb; end
				{1'b0,1'b1}: begin q=1'b0; qb=1'b1; end
				{1'b1,1'b0}: begin q=1'b1; qb=1'b0; end
				{1'b1,1'b1}: begin q=1'bx; qb=1'bx; end
			endcase
		end

endmodule

module FF_JK(
	input J,K,clk,
	output reg q,qb
    );
	
	initial
		begin
			q=1'b0;
			qb=1'b1;
		end
		
	always @(negedge clk)
		begin
			casex({J,K})
				{1'b0,1'b0}: begin q=q; qb=qb; end
				{1'b0,1'b1}: begin q=1'b0; qb=1'b1; end
				{1'b1,1'b0}: begin q=1'b1; qb=1'b0; end
				{1'b1,1'b1}: begin q=~q; qb=~qb; end
			endcase
		end

endmodule

module FF_D(
	input D,clk,
	output reg q,qb
    );
	
	initial
		begin
			q=1'b0;
			qb=1'b1;
		end
		
	always @(negedge clk)
		begin
			casex(D)
				1'b0: begin q=q; qb=qb; end
				1'b1: begin q=q; qb=qb; end
			endcase
		end

endmodule

module FF_T(
	input T,clk,
	output reg q,qb
    );
	
	initial
		begin
			q=1'b0;
			qb=1'b1;
		end
		
	always @(negedge clk)
		begin
			casex(T)
				1'b0: begin q=q; qb=qb; end
				1'b1: begin q=~q; qb=~qb; end
			endcase
		end

endmodule
