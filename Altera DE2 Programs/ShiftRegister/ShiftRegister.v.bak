module ShiftRegister(clk, reset, sin, qout);
	
	parameter n = 4;
	input clk, reset, sin;
	output reg [n-1:0]qout;
	
	always @ (posedge clk or negedge reset)
		begin
			if(!reset) 
			 begin 
				qout <= {n{1'b0}};
			 end
			else qout <= {sin,qout[n-1:1]};
		end
endmodule
