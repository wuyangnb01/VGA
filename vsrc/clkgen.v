module clkgen(
    input clk,
    output reg clk_out
);

reg [0:0] count;

initial begin
    count = 1'd0;
    clk_out = 1'b0;
end

always @(posedge clk) begin
    count <= count + 1'd1;
    if (count == 1'd1) begin
        clk_out <= ~clk_out;
        count <= 1'd0;
    end
end

endmodule