module mt_reg_file #(
    parameter NUM_THREADS = 8,
    parameter DATA_WIDTH = 32
    )(
        input clk, write_enable,
        input [BITS_THREADS-1:0] tid_read, tid_write,
        input [4:0] a1, a2, a3,
        input [DATA_WIDTH-1:0] wd3,
        output [DATA_WIDTH-1:0] rd1, rd2
    );

localparam BITS_THREADS = $clog2(NUM_THREADS);

reg [DATA_WIDTH-1:0] reg_array [0:16*NUM_THREADS-1];
reg [DATA_WIDTH-1:0] curr_reg_read [0:16-1];
reg [DATA_WIDTH-1:0] curr_reg_write [0:16-1];

wire [BITS_THREADS-1:0] curr_read_tid;
wire [BITS_THREADS-1:0] prev_read_tid;

integer i;

initial begin
    for(i=0;i<16*NUM_THREADS-1;i=i+1) begin
        reg_array[i] = 32'd0;
    end
end

// synchronous write logic
// always @(posedge clk) begin
//     if(write_enable) begin
//         curr_reg[a3[3:0]] <= wd3;
//     end
// end

//asynchronous read logic
assign rd1 = (a1[3:0] == 4'd0) ? (32'd0) : (curr_reg_read[a1[3:0]]);
assign rd2 = (a2[3:0] == 4'd0) ? (32'd0) : (curr_reg_read[a2[3:0]]);

// update curr reg and reg array
always@(posedge clk) begin
    // copy current values into reg array
    for(i=0;i<16;i=i+1) begin
        reg_array[prev_read_tid*16 + i] <= curr_reg_read[i];
    end

    if(write_enable) 
        reg_array[tid_write*16 + a3[3:0]] <= wd3;

    for(i=0;i<16;i=i+1) begin
        curr_reg_read[i] <= reg_array[curr_read_tid*16 + i];
    end

end

assign curr_read_tid = tid_read;
assign prev_read_tid = tid_read-1;

endmodule
