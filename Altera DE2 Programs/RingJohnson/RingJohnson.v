module RingJohnson(clk, s, reset, i, o);
	parameter n = 5;
	input clk, s, reset;
	input [0:n-1]i;
	output reg [0:n-1]o;
	
	always @ (posedge clk or negedge reset)
		begin
			if(!reset)
				begin
					o = {n{1'b0}};
				end
			else
				begin
					if(s == 0)
						begin
							if(o == 0)
								begin
									o = i;
								end
							else
								begin
									o = {o[n-1], o[0:n-2]};
								end
						end
				
					else
						begin
							o = {!(o[n-1]), o[0:n-2]};
						end
				end
		end
endmodule
