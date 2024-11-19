module LFshift_reg(clk,st,din,dout);
    input clk;
    input st;
    input [7:0] din;
    output reg [7:0] dout;
    reg dcul;
    integer i;

    always @(posedge clk)begin
        case (st)
            1:begin 
                dout <= din;
                dcul <= 0;
            end 
            default: begin
                dcul<=0;
                for (i=0;i<255;i=i+1)
                begin
                    dout<={dcul,dout[7:1]};
                    dcul<=dout[4]^dout[3]^dout[2]^dout[0];
                end
            end
        endcase
    end

endmodule 
