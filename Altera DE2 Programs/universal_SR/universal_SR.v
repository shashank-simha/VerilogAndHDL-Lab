module universal_SR(clk,sin,pin,qout,reset,s);
parameter n = 4;
parameter m = 2;
input [m-1:0]s;
input [n-1:0]pin;
input clk,sin,reset;
output reg [n-1:0] qout;
always @ (posedge clk or negedge reset)
	begin
		if (!reset) 
			begin 
				qout <= {n{1'b0}};
			end
		else
			begin
				case (s)
				2'b00: qout <= qout;
				2'b01: qout <= {sin,qout[n-1:1]};
				2'b10: qout <= {qout[n-1:0],sin};
				2'b11: qout <= pin;
				endcase
			end
	end
endmodule
