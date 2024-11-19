module bcd7seg(
    input [3:0] b,//输入
    output reg [6:0] h//编译结果(发光的数码管)
);

//共阳极
    always @(b) begin
        case(b[3:0])
            4'b0000:h=7'b0000001;//0
            4'b0001:h=7'b1001111;//1
            4'b0010:h=7'b0010010;//2
            4'b0011:h=7'b0000110;//3
            4'b0100:h=7'b1001100;//4
            4'b0101:h=7'b0100100;//5
            4'b0110:h=7'b0100000;//6
            4'b0111:h=7'b0001111;//7
            4'b1000:h=7'b0000000;//8
            4'b1001:h=7'b0000100;//9
            4'b1010:h=7'b0001000;//A10
            4'b1011:h=7'b1100000;//b11
            4'b1100:h=7'b0110001;//C12
            4'b1101:h=7'b1000010;//d13
            4'b1110:h=7'b0110000;//E14
            4'b1111:h=7'b0111000;//F15
            default:h=7'b11111111;//空
        endcase
    end 
endmodule
