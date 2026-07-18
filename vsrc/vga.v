module vga(
    input           CLOCK_50,
    output          VGA_HSYNC, //行同步和列同步信号
    output          VGA_VSYNC,
    output          VGA_BLANK_N,  //消隐信号
    output          VGA_SYNC_N,
    output [7:0]    VGA_R,//红绿蓝颜色信号
    output [7:0]    VGA_G,
    output [7:0]    VGA_B
);

wire pclk;
wire valid;

wire [3:0] r4, g4, b4;

clkgen clkgen_inst(
    .clk(CLOCK_50),
    .clk_out(pclk)
);

vga_ctrl vga_ctrl_inst(
    .pclk(pclk),
    .reset(1'b0),
    .vga_data(12'hFFF),
    .h_addr(),
    .v_addr(),
    .hsync(VGA_HSYNC),
    .vsync(VGA_VSYNC),
    .valid(valid),
    .vga_r(r4),
    .vga_g(g4),
    .vga_b(b4)
);

assign VGA_R = {r4, r4};
assign VGA_G = {g4, g4};
assign VGA_B = {b4, b4};

assign VGA_BLANK_N = valid;
assign VGA_SYNC_N = 1'b0;

endmodule
