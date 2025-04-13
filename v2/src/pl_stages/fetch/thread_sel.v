module thread_sel #(
    parameter NUM_THREADS = 8,
    parameter BITS_THREADS = $clog2(NUM_THREADS)
    )(
    input clk,rst,
    output reg [BITS_THREADS-1:0] tid
);

always@(posedge clk) begin
    if(rst)
        tid <= {BITS_THREADS{1'd0}};

    else
        tid <= tid + 1;
end
endmodule
