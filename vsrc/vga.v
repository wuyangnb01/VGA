module vga(
    input CLOCK_50,
    input rst,
    output VGA_HSYNC, //行同步和列同步信号
    output VGA_VSYNC,
    output VGA_BLANK_N,  //消隐信号
    output VGA_SYNC_N,
    output [7:0] VGA_R,//红绿蓝颜色信号
    output [7:0] VGA_G,
    output [7:0] VGA_B
);

wire pclk;
wire valid;
wire [9:0] addr_h;
wire [8:0] addr_v;
wire [7:0] r4, g4, b4;
wire [23:0] data;

clkgen clkgen_inst(
    .clk(CLOCK_50),
    .clk_out(pclk)
);

vga_ctrl vga_ctrl_inst(
    .pclk(pclk),
    .reset(1'b0),
    .vga_data(data),
    .h_addr(addr_h),
    .v_addr(addr_v),
    .hsync(VGA_HSYNC),
    .vsync(VGA_VSYNC),
    .valid(valid),
    .vga_r(r4),
    .vga_g(g4),
    .vga_b(b4)
);

vmem vmem_usage(
    .h_addr(addr_h),
    .v_addr(addr_v ),
    .vga_data(data)
);

assign VGA_R = r4;
assign VGA_G = g4;
assign VGA_B = b4;

assign VGA_BLANK_N = valid;
assign VGA_SYNC_N = 1'b0;

endmodule

module vmem(
    input [9:0] h_addr,
    input [8:0] v_addr,
    output [23:0] vga_data
);

reg [23:0] vga_mem [524287:0];

initial begin
    $readmemh("resource/picture.hex", vga_mem);
end

assign vga_data = vga_mem[{h_addr, v_addr}];

endmodule