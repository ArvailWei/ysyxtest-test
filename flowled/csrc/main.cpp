#include <nvboard.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

static TOP_NAME dut;
//static Vrandom_num* top;

void nvboard_bind_all_pins(TOP_NAME* top);
 
 //时钟信号
static void single_cycle(){
	dut.clk = 0; dut.eval();
	dut.clk = 1; dut.eval();
}
 
static void reset(int n){
	dut.rst = 1;
	while(n-->0) single_cycle();
	dut.rst = 0;
}
 
int main(){
	nvboard_bind_all_pins(&dut);
	nvboard_init();
	
	reset(10);
	while(1){
		nvboard_update();
		single_cycle();
	}
 
}

