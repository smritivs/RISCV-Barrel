module pl_reg_fd #(
	parameter ADDRESS_WIDTH = 32,
	parameter DATA_WIDTH = 32
	)(
	input clk, en, clr,

	input [ADDRESS_WIDTH-1:0] pc_f, pc_plus4_f,
    input [DATA_WIDTH-1:0] instr_f,

    output reg [ADDRESS_WIDTH-1:0] pc_d, pc_plus4_d,
    output reg [DATA_WIDTH-1:0] instr_d
);


always @(posedge clk) begin
	if(clr) begin
		pc_d <= 32'd0;
		pc_plus4_d <= 32'd0;
		instr_d <= 32'd0;
	end

	else if(!en) begin
		pc_d <= pc_f;
		pc_plus4_d <= pc_plus4_f;
		instr_d <= instr_f;
	end

end
endmodule
