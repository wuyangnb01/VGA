module clkgen(
    input clk,
    input clk_en,
    input rst,
    output reg clk_out
);

parameter clk_freq = 1000;
parameter countlimit = 50000000/2/clk_freq;

reg [31:0] count;

always @(posedge clk) begin
    if(rst) begin
        count <= 32'd0;
        clk_out <= 1'b0;
    end
    else begin
        if(clk_en) begin
        count <= count + 1;
            if(count>=countlimit) begin
                count <= 32'd0;
                clk_out<=~clk_en;
            end else 
                clk_out <= clk_out;
        end else begin
            count <= count;
            clk_out <= clk_out;
        end
    end
end

endmodule
