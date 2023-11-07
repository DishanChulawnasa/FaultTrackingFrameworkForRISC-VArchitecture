`timescale 1ns / 1ps
module tb_ADDERF;

  // Inputs
  reg [0:31] data1_in;
  reg [0:31] data2_in;
  reg f0,f1;
  // Outputs
  wire [0:31] data_o;

  // Instantiate the module
  ADDER uut (
    .data1_in0(data1_in[0]),
    .data1_in1(data1_in[1]),
    .data1_in2(data1_in[2]),
    .data1_in3(data1_in[3]),
    .data1_in4(data1_in[4]),
    .data1_in5(data1_in[5]),
    .data1_in6(data1_in[6]),
    .data1_in7(data1_in[7]),
    .data1_in8(data1_in[8]),
    .data1_in9(data1_in[9]),
    .data1_in10(data1_in[10]),
    .data1_in11(data1_in[11]),
    .data1_in12(data1_in[12]),
    .data1_in13(data1_in[13]),
    .data1_in14(data1_in[14]),
    .data1_in15(data1_in[15]),
    .data1_in16(data1_in[16]),
    .data1_in17(data1_in[17]),
    .data1_in18(data1_in[18]),
    .data1_in19(data1_in[19]),
    .data1_in20(data1_in[20]),
    .data1_in21(data1_in[21]),
    .data1_in22(data1_in[22]),
    .data1_in23(data1_in[23]),
    .data1_in24(data1_in[24]),
    .data1_in25(data1_in[25]),
    .data1_in26(data1_in[26]),
    .data1_in27(data1_in[27]),
    .data1_in28(data1_in[28]),
    .data1_in29(data1_in[29]),
    .data1_in30(data1_in[30]),
    .data1_in31(data1_in[31]),    
    .data2_in0(data2_in[0]),
    .data2_in1(data2_in[1]),
    .data2_in2(data2_in[2]),
    .data2_in3(data2_in[3]),
    .data2_in4(data2_in[4]),
    .data2_in5(data2_in[5]),
    .data2_in6(data2_in[6]),
    .data2_in7(data2_in[7]),
    .data2_in8(data2_in[8]),
    .data2_in9(data2_in[9]),
    .data2_in10(data2_in[10]),
    .data2_in11(data2_in[11]),
    .data2_in12(data2_in[12]),
    .data2_in13(data2_in[13]),
    .data2_in14(data2_in[14]),
    .data2_in15(data2_in[15]),
    .data2_in16(data2_in[16]),
    .data2_in17(data2_in[17]),
    .data2_in18(data2_in[18]),
    .data2_in19(data2_in[19]),
    .data2_in20(data2_in[20]),
    .data2_in21(data2_in[21]),
    .data2_in22(data2_in[22]),
    .data2_in23(data2_in[23]),
    .data2_in24(data2_in[24]),
    .data2_in25(data2_in[25]),
    .data2_in26(data2_in[26]),
    .data2_in27(data2_in[27]),
    .data2_in28(data2_in[28]),
    .data2_in29(data2_in[29]),
    .data2_in30(data2_in[30]),
    .data2_in31(data2_in[31]),
    .f0(f0),
    .f1(f1),
    .data_o0(data_o[0]),
    .data_o1(data_o[1]),
    .data_o2(data_o[2]),
    .data_o3(data_o[3]),
    .data_o4(data_o[4]),
    .data_o5(data_o[5]),
    .data_o6(data_o[6]),
    .data_o7(data_o[7]),
    .data_o8(data_o[8]),
    .data_o9(data_o[9]),
    .data_o10(data_o[10]),
    .data_o11(data_o[11]),
    .data_o12(data_o[12]),
    .data_o13(data_o[13]),
    .data_o14(data_o[14]),
    .data_o15(data_o[15]),
    .data_o16(data_o[16]),
    .data_o17(data_o[17]),
    .data_o18(data_o[18]),
    .data_o19(data_o[19]),
    .data_o20(data_o[20]),
    .data_o21(data_o[21]),
    .data_o22(data_o[22]),
    .data_o23(data_o[23]),
    .data_o24(data_o[24]),
    .data_o25(data_o[25]),
    .data_o26(data_o[26]),
    .data_o27(data_o[27]),
    .data_o28(data_o[28]),
    .data_o29(data_o[29]),
    .data_o30(data_o[30]),
    .data_o31(data_o[31])
    
  );

  // Clock generation
  reg clk = 0;
  always begin
    #5 clk = ~clk;
  end

  // Apply stimulus
  always begin
    //1
    data1_in = 32'b10001010101101010001001001111111; 
    data2_in = 32'b10000010101101010001001001111111;
    f0 = 1'b0;
    f1 = 1'b1;
    #10; 
    $display("data_o = %b", data_o);
    
    //2
  	data1_in = 32'bxx1101xxxxxxxxxxxxxxxxxxxxxxxxxx;
    data2_in = 32'bxx111111111xxxxxxxxxxxxxxxxxxxxx;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //3
    data1_in = 32'bx110x0xxxxxxxxxxxxxxxxxxxxxxxxx1;
    data2_in = 32'bx11000xxxxxxxxxxxxxxxxxxxxxxxxx1;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //4
    data1_in = 32'bxx10x0xxxxxxxxxxxxxxxxxxxxxxxxxx;
    data2_in = 32'bxx0000xxxxxxxxxxxxxxxxxxxxxxxxxx;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //5
    data1_in = 32'bx010x0xxxxxxxxxxxxxxxxxxxxxxxxxx;
    data2_in = 32'bx01000xxxxxxxxxxxxxxxxxxxxxxxxxx;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //6
    data1_in = 32'bx000x0xxxxxxxxxxxxxxxx0xx0000000;
    data2_in = 32'b000000xxxxx0xxxxxxxxxx0xx0000000;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //7
    data1_in = 32'bx000x0xxxxxxxxxxxxxxxxxxxxxxxx10;
    data2_in = 32'bx00000xxxxxxxxxxxxxxxxxxxxxxxx11;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //8
    data1_in = 32'bx000x0xxxxxxxxxxxxxxxxxxxxxxx1x1;
    data2_in = 32'bx00000xxxxxxxxxxxxxxxxxxxxxxx0x1;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //9
    data1_in = 32'bx000x0xxxxxxxxxxxxxxxxxxxxxx0001;
    data2_in = 32'bx00000xxxxxxxxxxxxxxxxxxxxxx0001;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //10
    data1_in = 32'bx000x0xxxxxxxxxxxxxxxxxxxxx001x1;
    data2_in = 32'bx00000xxxxxxxxxxxxxxxxxxxxx00111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //11
    data1_in = 32'bx000x0xxxxxxxxxxxxxxxxxxxxx111x1;
    data2_in = 32'bx00000xxxxxxxxxxxxxxxxxxxxx01111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //12
    data1_in = 32'bx000x0xxxxxxxxxxxxxxxxxxxx0011x1;
    data2_in = 32'bx00000xxxxxxxxxxxxxxxxxxxx001111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //13
    data1_in = 32'bx000x0xxxxxxxxxxxxxxxxxxx00111x1;
    data2_in = 32'bx00000xxxxxxxxxxxxxxxxxxx0011111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //14
    data1_in = 32'bx000x0xxxxxxxxxxxxxxxxxxx11111x1;
    data2_in = 32'bx00000xxxxxxxxxxxxxxxxxxx0111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //15
    data1_in = 32'bx000x0xxxxxxxxxxxxxxxxxxx01111x1;
    data2_in = 32'b000000xxxxx0xxxxxxxxxx0xx0111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //16
    data1_in = 32'bx000x0xxxxxxxxxxxxxxxx0xx11111x1;
    data2_in = 32'b000000xxxxx0xxxxxxxxxx0xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //17
    data1_in = 32'b0000x0xxxxx0xxxxxxxxxx1xx11111x1;
    data2_in = 32'b000000xxxxx0xxxxxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //18
    data1_in = 32'b100000xxxxx1xxxxxxxxxx1xx11111x1;
    data2_in = 32'b100000xxxxx1xxxxxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //19
    data1_in = 32'b10001010xxx1xxxxxxxxxx1xx11111x1;
    data2_in = 32'b10000000xxx1xxxxxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //20
    data1_in = 32'b1000100xxxx1xxxxxxxxxx1xx11111x1;
    data2_in = 32'b1000001xxxx1xxxxxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //21
    data1_in = 32'b10001000xxx1xxxxxxxxxx1xx11111x1;
    data2_in = 32'b10000000xxx1xxxxxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //22
    data1_in = 32'b1000101010x1xxxxxxxxxx1xx11111x1;
    data2_in = 32'b1000001000x1xxxxxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //23
    data1_in = 32'b100010110xx1xxxxxxxxxx1xx11111x1;
    data2_in = 32'b100000111xx1xxxxxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //24
    data1_in = 32'b1000101000x1xxxxxxxxxx1xx11111x1;
    data2_in = 32'b1000001000x1xxxxxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //25
    data1_in = 32'b100010101101xxxxxxxxxx1xx11111x1;
    data2_in = 32'b100000101111xxxxxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //26
    data1_in = 32'b1000101010110xxxxxxxxx1xx11111x1;
    data2_in = 32'b1000001010010xxxxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //27
    data1_in = 32'b100010101001xxxxxxxxxx1xx11111x1;
    data2_in = 32'b100000101001xxxxxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //28
    data1_in = 32'b10001010101110xxxxxxxx1xx11111x1;
    data2_in = 32'b10000010101111xxxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //29
    data1_in = 32'b100010101011010xxxxxxx1xx11111x1;
    data2_in = 32'b100000101011000xxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //30
    data1_in = 32'b10001010101100xxxxxxxx1xx11111x1;
    data2_in = 32'b10000010101100xxxxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //31
    data1_in = 32'b1000101010110110xxxxxx1xx11111x1;
    data2_in = 32'b1000001010110111xxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //32
    data1_in = 32'b10001010101101010xxxxx1xx11111x1;
    data2_in = 32'b10000010101101000xxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //33
    data1_in = 32'b1000101010110100xxxxxx1xx11111x1;
    data2_in = 32'b1000001010110100xxxxxx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //34
    data1_in = 32'b100010101011010111xxxx1xx11111x1;
    data2_in = 32'b10000010101101011111xx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //35
    data1_in = 32'b1000101010110101001xxx1xx11111x1;
    data2_in = 32'b10000010101101010011xx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //36
    data1_in = 32'b100010101011010100010x1xx11111x1;
    data2_in = 32'b100000101011010100000x1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //37
    data1_in = 32'b10001010101101010000xx1xx11111x1;
    data2_in = 32'b10000010101101010001xx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //38
    data1_in = 32'b10001010101101010000xx1xx11111x1;
    data2_in = 32'b10000010101101010000xx1xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //39
    data1_in = 32'b10001010101101010001x11xx11111x1;
    data2_in = 32'b10000010101101010001x11xx1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //40
    data1_in = 32'b100010101011010100010011x11111x1;
    data2_in = 32'b100000101011010100010011x1111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //41
    data1_in = 32'b100010101011010100010010111111x1;
    data2_in = 32'b10000010101101010001001011111111;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
    
    //42
    data1_in = 32'bxx111xxxxxxxxxxxxxxxxxxxxxxxxxxx;
    data2_in = 32'bxx111111111xxxxxxxxxxxxxxxxxxxxx;
    f0 = 1'b0;
    f1 = 1'b1;
	#10;
    $display("data_o = %b", data_o);
        
    
   // Simulation time
    $finish;
  end

endmodule
