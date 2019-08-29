module decoder(en,x,y);
parameter m = 2;
parameter n = 4;

input en; 
input [m-1:0]x;
output reg  [n-1 : 0]y;

always @ (en,x)
begin
if (!en)  y = {n{1'b0}} ;
else y = {{n-1{1'b0}}, 1'b1} <<x ;
end 
endmodule 