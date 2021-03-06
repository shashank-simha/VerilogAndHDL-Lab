module word_disp(en,p,q,r,s,t);
input en;
output reg [6:0]p,q,r,s,t;
initial
begin
p={7{1'b1}};
q={7{1'b1}};
r={7{1'b1}};
s={7{1'b1}};
t={7{1'b1}};
end
always @(*)
begin
if(en)  
   begin
	p=7'b0111111;
	q=7'b0111111;
	r=7'b0111111;
	s=7'b0111111;
	t=7'b0111111;
	end
else
  begin
    p=7'b0001001;
	q=7'b0000110;
	r=7'b1000111;
	s=7'b1000111;
	t=7'b1000000;
	end
end
endmodule
	
