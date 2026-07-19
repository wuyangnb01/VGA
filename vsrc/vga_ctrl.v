module vga_ctrl(
    input           pclk,     //25MHz时钟
    input           reset,    //置位
    input  [23:0]   vga_data, //上层模块提供的VGA颜色数据(12-bit RGB444)
    output [9:0]    h_addr,   //提供给上层模块的当前扫描像素点坐标
    output [8:0]    v_addr,
    output          hsync,    //行同步和列同步信号
    output          vsync,
    output          valid,    //消隐信号
    output [7:0]    vga_r,
    output [7:0]    vga_g,
    output [7:0]    vga_b
    );

  //640x480分辨率下的VGA参数设置
  parameter    H_SYNC    = 96;
  parameter    H_FRONT   = 48;
  parameter    H_ACTIVE  = 640;
  parameter    H_BACK    = 16;
  parameter    H_TOTAL   = H_SYNC + H_FRONT + H_ACTIVE + H_BACK;
  
  parameter    V_SYNC    = 2;
  parameter    V_FRONT   = 10;
  parameter    V_ACTIVE  = 480;
  parameter    V_BACK    = 33;
  parameter    V_TOTAL   = V_SYNC + V_FRONT + V_ACTIVE + V_BACK;

  //像素计数值
  reg [9:0] x_cnt;
  reg [8:0] y_cnt;
  wire h_valid;
  wire v_valid;

  always @(posedge pclk) begin //行像素计数
      if (reset == 1'b1) begin
          x_cnt <= 10'd0;
      end else begin
          x_cnt <= x_cnt + 10'd1;
          if (x_cnt == H_TOTAL - 1) begin
              x_cnt <= 10'd0;
          end
      end
  end

  always @(posedge pclk) begin //列像素计数
      if (reset == 1'b1) begin
          y_cnt <= 9'd0;
      end else begin
          if (x_cnt == H_TOTAL - 1) begin
              y_cnt <= y_cnt + 9'd1;
              if (y_cnt == V_TOTAL - 1) begin
                  y_cnt <= 9'd0;
              end
          end
      end
  end

  assign hsync = ~(x_cnt < H_SYNC);
  assign vsync = ~(y_cnt < V_SYNC);
  
  assign h_valid = (x_cnt >= H_SYNC + H_FRONT) && (x_cnt < H_SYNC + H_FRONT + H_ACTIVE);
  assign v_valid = (y_cnt >= V_SYNC + V_FRONT) && (y_cnt < V_SYNC + V_FRONT + V_ACTIVE);
  assign valid = h_valid && v_valid;
  
  assign h_addr = h_valid ? (x_cnt - (H_SYNC + H_FRONT)) : 10'd0;
  assign v_addr = v_valid ? (y_cnt - (V_SYNC + V_FRONT)) : 9'd0;
  
  assign vga_r = valid ? vga_data[23:16] : 8'd0;
  assign vga_g = valid ? vga_data[15:8] : 8'd0;
  assign vga_b = valid ? vga_data[7:0] : 8'd0;
  
endmodule
