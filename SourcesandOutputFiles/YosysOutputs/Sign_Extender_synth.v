/* Generated by Yosys 0.33+6 (git sha1 31ee566ec, x86_64-w64-mingw32-g++ 9.2.1 -Os) */

(* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:23.1-35.10" *)
module Sign_Extender(select_i, \data0_i[0] , \data0_i[1] , \data0_i[2] , \data0_i[3] , \data0_i[4] , \data0_i[5] , \data0_i[6] , \data0_i[7] , \data0_i[8] , \data0_i[9] , \data0_i[10] , \data0_i[11] , \data1_i[0] , \data1_i[1] , \data1_i[2] , \data1_i[3] , \data1_i[4] , \data1_i[5] , \data1_i[6] , \data1_i[7] 
, \data1_i[8] , \data1_i[9] , \data1_i[10] , \data1_i[11] , \data_o[0] , \data_o[1] , \data_o[2] , \data_o[3] , \data_o[4] , \data_o[5] , \data_o[6] , \data_o[7] , \data_o[8] , \data_o[9] , \data_o[10] , \data_o[11] , \data_o[12] , \data_o[13] , \data_o[14] , \data_o[15] , \data_o[16] 
, \data_o[17] , \data_o[18] , \data_o[19] , \data_o[20] , \data_o[21] , \data_o[22] , \data_o[23] , \data_o[24] , \data_o[25] , \data_o[26] , \data_o[27] , \data_o[28] , \data_o[29] , \data_o[30] , \data_o[31] );
  wire _00_;
  wire _01_;
  wire _02_;
  wire _03_;
  wire _04_;
  wire _05_;
  wire _06_;
  wire _07_;
  wire _08_;
  wire _09_;
  wire _10_;
  wire _11_;
  wire _12_;
  wire _13_;
  wire _14_;
  wire _15_;
  wire _16_;
  wire _17_;
  wire _18_;
  wire _19_;
  wire _20_;
  wire _21_;
  wire _22_;
  wire _23_;
  wire _24_;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.14-29.21" *)
  input \data0_i[0] ;
  wire \data0_i[0] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.14-29.21" *)
  input \data0_i[10] ;
  wire \data0_i[10] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.14-29.21" *)
  input \data0_i[11] ;
  wire \data0_i[11] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.14-29.21" *)
  input \data0_i[1] ;
  wire \data0_i[1] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.14-29.21" *)
  input \data0_i[2] ;
  wire \data0_i[2] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.14-29.21" *)
  input \data0_i[3] ;
  wire \data0_i[3] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.14-29.21" *)
  input \data0_i[4] ;
  wire \data0_i[4] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.14-29.21" *)
  input \data0_i[5] ;
  wire \data0_i[5] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.14-29.21" *)
  input \data0_i[6] ;
  wire \data0_i[6] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.14-29.21" *)
  input \data0_i[7] ;
  wire \data0_i[7] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.14-29.21" *)
  input \data0_i[8] ;
  wire \data0_i[8] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.14-29.21" *)
  input \data0_i[9] ;
  wire \data0_i[9] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.22-29.29" *)
  input \data1_i[0] ;
  wire \data1_i[0] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.22-29.29" *)
  input \data1_i[10] ;
  wire \data1_i[10] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.22-29.29" *)
  input \data1_i[11] ;
  wire \data1_i[11] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.22-29.29" *)
  input \data1_i[1] ;
  wire \data1_i[1] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.22-29.29" *)
  input \data1_i[2] ;
  wire \data1_i[2] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.22-29.29" *)
  input \data1_i[3] ;
  wire \data1_i[3] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.22-29.29" *)
  input \data1_i[4] ;
  wire \data1_i[4] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.22-29.29" *)
  input \data1_i[5] ;
  wire \data1_i[5] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.22-29.29" *)
  input \data1_i[6] ;
  wire \data1_i[6] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.22-29.29" *)
  input \data1_i[7] ;
  wire \data1_i[7] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.22-29.29" *)
  input \data1_i[8] ;
  wire \data1_i[8] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:29.22-29.29" *)
  input \data1_i[9] ;
  wire \data1_i[9] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[0] ;
  wire \data_o[0] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[10] ;
  wire \data_o[10] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[11] ;
  wire \data_o[11] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[12] ;
  wire \data_o[12] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[13] ;
  wire \data_o[13] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[14] ;
  wire \data_o[14] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[15] ;
  wire \data_o[15] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[16] ;
  wire \data_o[16] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[17] ;
  wire \data_o[17] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[18] ;
  wire \data_o[18] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[19] ;
  wire \data_o[19] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[1] ;
  wire \data_o[1] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[20] ;
  wire \data_o[20] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[21] ;
  wire \data_o[21] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[22] ;
  wire \data_o[22] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[23] ;
  wire \data_o[23] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[24] ;
  wire \data_o[24] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[25] ;
  wire \data_o[25] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[26] ;
  wire \data_o[26] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[27] ;
  wire \data_o[27] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[28] ;
  wire \data_o[28] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[29] ;
  wire \data_o[29] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[2] ;
  wire \data_o[2] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[30] ;
  wire \data_o[30] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[31] ;
  wire \data_o[31] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[3] ;
  wire \data_o[3] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[4] ;
  wire \data_o[4] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[5] ;
  wire \data_o[5] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[6] ;
  wire \data_o[6] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[7] ;
  wire \data_o[7] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[8] ;
  wire \data_o[8] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:31.14-31.20" *)
  output \data_o[9] ;
  wire \data_o[9] ;
  (* src = "D:\\SoftwareFrameWork\\RISCVProcessor\\Sign_Extender.v:30.7-30.15" *)
  input select_i;
  wire select_i;
  NOT _25_ (
    .A(select_i),
    .Y(_00_)
  );
  NAND _26_ (
    .A(\data0_i[8] ),
    .B(_00_),
    .Y(_01_)
  );
  NAND _27_ (
    .A(\data1_i[8] ),
    .B(select_i),
    .Y(_02_)
  );
  NAND _28_ (
    .A(_01_),
    .B(_02_),
    .Y(\data_o[8] )
  );
  NAND _29_ (
    .A(_00_),
    .B(\data0_i[9] ),
    .Y(_03_)
  );
  NAND _30_ (
    .A(select_i),
    .B(\data1_i[9] ),
    .Y(_04_)
  );
  NAND _31_ (
    .A(_03_),
    .B(_04_),
    .Y(\data_o[9] )
  );
  NAND _32_ (
    .A(_00_),
    .B(\data0_i[10] ),
    .Y(_05_)
  );
  NAND _33_ (
    .A(select_i),
    .B(\data1_i[10] ),
    .Y(_06_)
  );
  NAND _34_ (
    .A(_05_),
    .B(_06_),
    .Y(\data_o[10] )
  );
  NAND _35_ (
    .A(_00_),
    .B(\data0_i[11] ),
    .Y(_07_)
  );
  NAND _36_ (
    .A(select_i),
    .B(\data1_i[11] ),
    .Y(_08_)
  );
  NAND _37_ (
    .A(_07_),
    .B(_08_),
    .Y(\data_o[11] )
  );
  NAND _38_ (
    .A(_00_),
    .B(\data0_i[0] ),
    .Y(_09_)
  );
  NAND _39_ (
    .A(select_i),
    .B(\data1_i[0] ),
    .Y(_10_)
  );
  NAND _40_ (
    .A(_09_),
    .B(_10_),
    .Y(\data_o[0] )
  );
  NAND _41_ (
    .A(_00_),
    .B(\data0_i[1] ),
    .Y(_11_)
  );
  NAND _42_ (
    .A(select_i),
    .B(\data1_i[1] ),
    .Y(_12_)
  );
  NAND _43_ (
    .A(_11_),
    .B(_12_),
    .Y(\data_o[1] )
  );
  NAND _44_ (
    .A(_00_),
    .B(\data0_i[2] ),
    .Y(_13_)
  );
  NAND _45_ (
    .A(select_i),
    .B(\data1_i[2] ),
    .Y(_14_)
  );
  NAND _46_ (
    .A(_13_),
    .B(_14_),
    .Y(\data_o[2] )
  );
  NAND _47_ (
    .A(_00_),
    .B(\data0_i[3] ),
    .Y(_15_)
  );
  NAND _48_ (
    .A(select_i),
    .B(\data1_i[3] ),
    .Y(_16_)
  );
  NAND _49_ (
    .A(_15_),
    .B(_16_),
    .Y(\data_o[3] )
  );
  NAND _50_ (
    .A(_00_),
    .B(\data0_i[4] ),
    .Y(_17_)
  );
  NAND _51_ (
    .A(select_i),
    .B(\data1_i[4] ),
    .Y(_18_)
  );
  NAND _52_ (
    .A(_17_),
    .B(_18_),
    .Y(\data_o[4] )
  );
  NAND _53_ (
    .A(_00_),
    .B(\data0_i[5] ),
    .Y(_19_)
  );
  NAND _54_ (
    .A(select_i),
    .B(\data1_i[5] ),
    .Y(_20_)
  );
  NAND _55_ (
    .A(_19_),
    .B(_20_),
    .Y(\data_o[5] )
  );
  NAND _56_ (
    .A(_00_),
    .B(\data0_i[6] ),
    .Y(_21_)
  );
  NAND _57_ (
    .A(select_i),
    .B(\data1_i[6] ),
    .Y(_22_)
  );
  NAND _58_ (
    .A(_21_),
    .B(_22_),
    .Y(\data_o[6] )
  );
  NAND _59_ (
    .A(_00_),
    .B(\data0_i[7] ),
    .Y(_23_)
  );
  NAND _60_ (
    .A(select_i),
    .B(\data1_i[7] ),
    .Y(_24_)
  );
  NAND _61_ (
    .A(_23_),
    .B(_24_),
    .Y(\data_o[7] )
  );
  assign \data_o[12]  = \data_o[11] ;
  assign \data_o[13]  = \data_o[11] ;
  assign \data_o[14]  = \data_o[11] ;
  assign \data_o[15]  = \data_o[11] ;
  assign \data_o[16]  = \data_o[11] ;
  assign \data_o[17]  = \data_o[11] ;
  assign \data_o[18]  = \data_o[11] ;
  assign \data_o[19]  = \data_o[11] ;
  assign \data_o[20]  = \data_o[11] ;
  assign \data_o[21]  = \data_o[11] ;
  assign \data_o[22]  = \data_o[11] ;
  assign \data_o[23]  = \data_o[11] ;
  assign \data_o[24]  = \data_o[11] ;
  assign \data_o[25]  = \data_o[11] ;
  assign \data_o[26]  = \data_o[11] ;
  assign \data_o[27]  = \data_o[11] ;
  assign \data_o[28]  = \data_o[11] ;
  assign \data_o[29]  = \data_o[11] ;
  assign \data_o[30]  = \data_o[11] ;
  assign \data_o[31]  = \data_o[11] ;
endmodule
