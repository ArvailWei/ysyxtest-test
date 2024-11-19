module random_num(st,din,clk,dout,led,seg0,seg1);
    input st;
    input [7:0] din;
    input clk;
    output reg [7:0] dout;
    output reg [7:0] led;
    output reg [6:0] seg0,seg1; 

    assign led=dout;

    //实例化
    LFshift_reg myreg(
        .st(st),
        .clk(clk),
        .din(din),
        .dout(dout)
    );

    bcd7seg segA(.b(dout[7:4]),.h(seg1));
    bcd7seg segB(.b(dout[3:0]),.h(seg0));
    


endmodule
