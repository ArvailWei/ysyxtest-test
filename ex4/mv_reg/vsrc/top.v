`timescale 1ns/1ps//进行的秒数/精度

module top(clk,clr,date,q,select,decide,segA,segB,segC,segD,segE,segF,segG);
    reg clr;
    reg clk;
    input [7:0] date;
    input [2:0] select;
    output reg [7:0] q;
    output reg [6:0] segA,segB,segC,segD,segE,segF,segG;

    initial begin
        clk = 0;
        clr = 0;
        forever #20000 clr = ~clr;
        forever #5 clk = ~clk;
    end

    #10

    mv_reg my_reg(
        .clk(clk),
        .clr(clr),
        .date(in_date),
        .select(select),
        .decide(decide),
        .q(out_date)
    )

    bcd7seg seg0(.q[0],.h(segA));
    bcd7seg seg1(.q[1],.h(segB));
    bcd7seg seg2(.q[2],.h(segC));
    bcd7seg seg3(.q[3],.h(segD));
    bcd7seg seg4(.q[4],.h(segE));
    bcd7seg seg5(.q[5],.h(segF));
    bcd7seg seg6(.q[6],.h(segG));

endmodule
