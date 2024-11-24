module top(
    input clk,
    input rst,
    input ps2_data,
    input ps2_clk,

    output [7:0] led,
    output reg [6:0] seg0,
    output reg [6:0] seg1,
    output reg [6:0] seg3,
    output reg [6:0] seg4,
    output reg [6:0] seg6,
    output reg [6:0] seg7,

    output reg [6:0] seg2,
    output reg [6:0] seg5
);
    reg [7:0] count;//储存按下键数
    reg [7:0] data;//储存键盘接收到的键值信号
    wire ready;//可读信号，说明data中存在数据可以被读取
    wire overflow;
    reg nextdata;//是否读取下一个数据的信号，传回给key_board module读取下一个接受到的信号
    reg [7:0] ascii_code;
    reg [7:0] data_Judge[1:0];//用于判断按起以及松开

    assign led[7:0] = data;
    assign seg2[6:0] = 7'b1111111;
    assign seg5[6:0] = 7'b1111111;

    always @(posedge clk)begin
        //复位操作
        if (~rst) begin
            count <= 0;
            data_Judge[0] <= 8'h0;
            data_Judge[1] <= 8'h0;
            
        end
        //读取操作
        else begin
            if (ready)begin
                nextdata <= 1'b0;
                data_Judge[1] <= data_Judge[0];
                data_Judge[0] <= data;
            end
        end
        //按下操作 (前一个数据等于断码，当下数据不等于断码(松开时的断码和通码会先后输出)）
        if (data_Judge[1] == 8'hf0 && data_Judge[0] != 8'hf0) begin   
            count <= count+1'b1;
        end
        //松开操作(断码存在),关四个灯
        /*else if(data_Judge[1]==8'hf0)begin
            seg0 <= 7'b1111111;
            seg1 <= 7'b1111111;
            seg3 <= 7'b1111111;
            seg4 <= 7'b1111111;
        end*/
    end


//实例化
    ps2_keyboard my_keyboard(
        .clk(clk),
        .rst(rst),
        .ps2_clk(ps2_clk),
        .ps2_data(ps2_data),
        .data(data),
        .ready(ready),
        //.overflow(overflow)
        .nextdata(nextdata)
    );
    
    scancode2ascii my_module(
        .scan(data),
        .ascii(ascii_code)
    );
    bcd7seg myseg0(.b(data[3:0]),.h(seg0));
    bcd7seg myseg1(.b(data[7:4]),.h(seg1));
    bcd7seg myseg3(.b(ascii_code[3:0]),.h(seg3));
    bcd7seg myseg4(.b(ascii_code[7:4]),.h(seg4));
    bcd7seg myseg6(.b(count[3:0]),.h(seg6));
    bcd7seg myseg7(.b(count[7:4]),.h(seg7));
endmodule 
     