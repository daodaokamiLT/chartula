#include <stdio.h>
#include "floatfann.h"

int main()
{
	fann_type *calc_out;
	fann_type input[256];

	struct fann *ann = fann_create_from_file("eeg_data_float.net");
input[1] = 3.600000;
input[2] = 2.925000;
input[3] = 2.362500;
input[4] = 1.856250;
input[5] = 1.237500;
input[6] = 1.181250;
input[7] = 2.081250;
input[8] = 2.362500;
input[9] = 2.193750;
input[10] = 2.981250;
input[11] = 3.600000;
input[12] = 3.825000;
input[13] = 2.981250;
input[14] = 2.137500;
input[15] = 1.856250;
input[16] = 1.800000;
input[17] = 2.531250;
input[18] = 3.656250;
input[19] = 3.093750;
input[20] = 2.475000;
input[21] = 2.812500;
input[22] = 2.756250;
input[23] = 3.150000;
input[24] = 3.656250;
input[25] = 3.431250;
input[26] = 3.150000;
input[27] = 2.925000;
input[28] = 2.756250;
input[29] = 2.362500;
input[30] = 2.025000;
input[31] = 1.462500;
input[32] = 1.068750;
input[33] = 1.575000;
input[34] = 2.418750;
input[35] = 2.868750;
input[36] = 2.868750;
input[37] = 2.418750;
input[38] = 2.306250;
input[39] = 2.193750;
input[40] = 2.081250;
input[41] = 2.025000;
input[42] = 1.856250;
input[43] = 1.800000;
input[44] = 1.631250;
input[45] = 1.968750;
input[46] = 2.700000;
input[47] = 3.093750;
input[48] = 3.262500;
input[49] = 3.712500;
input[50] = 3.825000;
input[51] = 3.375000;
input[52] = 2.531250;
input[53] = 1.575000;
input[54] = 2.193750;
input[55] = 3.150000;
input[56] = 3.206250;
input[57] = 2.531250;
input[58] = 2.812500;
input[59] = 3.318750;
input[60] = 3.937500;
input[61] = 3.825000;
input[62] = 3.375000;
input[63] = 3.037500;
input[64] = 2.812500;
input[65] = 2.925000;
input[66] = 2.812500;
input[67] = 2.362500;
input[68] = 2.700000;
input[69] = 3.768750;
input[70] = 4.556250;
input[71] = 4.275000;
input[72] = 4.050000;
input[73] = 3.881250;
input[74] = 3.600000;
input[75] = 2.475000;
input[76] = 1.575000;
input[77] = 1.012500;
input[78] = 0.000000;
input[79] = -0.281470;
input[80] = 0.225000;
input[81] = 1.350000;
input[82] = 1.968750;
input[83] = 2.306250;
input[84] = 1.912500;
input[85] = 0.675000;
input[86] = 0.450000;
input[87] = 1.068750;
input[88] = 1.406250;
input[89] = 1.181250;
input[90] = 0.450000;
input[91] = 0.337500;
input[92] = 0.506250;
input[93] = 1.012500;
input[94] = 1.012500;
input[95] = 0.618750;
input[96] = 0.900000;
input[97] = 1.575000;
input[98] = 1.912500;
input[99] = 1.800000;
input[100] = 2.193750;
input[101] = 2.418750;
input[102] = 1.575000;
input[103] = 0.900000;
input[104] = 1.181250;
input[105] = 1.968750;
input[106] = 2.306250;
input[107] = 2.137500;
input[108] = 1.462500;
input[109] = 0.731250;
input[110] = 0.393750;
input[111] = 0.900000;
input[112] = 2.250000;
input[113] = 3.037500;
input[114] = 3.093750;
input[115] = 2.925000;
input[116] = 2.925000;
input[117] = 2.700000;
input[118] = 2.250000;
input[119] = 1.800000;
input[120] = 2.025000;
input[121] = 3.318750;
input[122] = 3.881250;
input[123] = 3.318750;
input[124] = 2.475000;
input[125] = 2.025000;
input[126] = 1.800000;
input[127] = 1.068750;
input[128] = 0.281250;
input[129] = -0.337720;
input[130] = -0.900220;
input[131] = 0.000000;
input[132] = 1.068750;
input[133] = 1.518750;
input[134] = 1.575000;
input[135] = 1.406250;
input[136] = 1.800000;
input[137] = 2.756250;
input[138] = 3.712500;
input[139] = 3.656250;
input[140] = 2.925000;
input[141] = 2.418750;
input[142] = 2.081250;
input[143] = 2.081250;
input[144] = 2.362500;
input[145] = 2.925000;
input[146] = 3.206250;
input[147] = 3.375000;
input[148] = 3.093750;
input[149] = 2.475000;
input[150] = 1.912500;
input[151] = 1.631250;
input[152] = 1.856250;
input[153] = 1.856250;
input[154] = 1.912500;
input[155] = 2.756250;
input[156] = 3.768750;
input[157] = 4.162500;
input[158] = 3.881250;
input[159] = 3.093750;
input[160] = 2.306250;
input[161] = 3.093750;
input[162] = 4.612500;
input[163] = 5.456250;
input[164] = 4.668750;
input[165] = 3.206250;
input[166] = 3.206250;
input[167] = 3.656250;
input[168] = 3.262500;
input[169] = 2.700000;
input[170] = 1.912500;
input[171] = 1.800000;
input[172] = 2.475000;
input[173] = 3.375000;
input[174] = 3.206250;
input[175] = 1.856250;
input[176] = 0.281250;
input[177] = 0.506250;
input[178] = 1.012500;
input[179] = 1.012500;
input[180] = 0.675000;
input[181] = -0.281470;
input[182] = -1.181470;
input[183] = -1.181470;
input[184] = -0.000220;
input[185] = 1.462500;
input[186] = 2.306250;
input[187] = 2.531250;
input[188] = 2.925000;
input[189] = 2.925000;
input[190] = 2.925000;
input[191] = 3.150000;
input[192] = 3.206250;
input[193] = 2.981250;
input[194] = 2.756250;
input[195] = 2.925000;
input[196] = 3.656250;
input[197] = 3.431250;
input[198] = 2.812500;
input[199] = 2.418750;
input[200] = 3.206250;
input[201] = 3.881250;
input[202] = 3.150000;
input[203] = 1.350000;
input[204] = 0.506250;
input[205] = 1.406250;
input[206] = 2.475000;
input[207] = 3.037500;
input[208] = 3.093750;
input[209] = 2.250000;
input[210] = 1.518750;
input[211] = 1.575000;
input[212] = 1.462500;
input[213] = 2.025000;
input[214] = 3.375000;
input[215] = 4.500000;
input[216] = 4.612500;
input[217] = 4.275000;
input[218] = 4.106250;
input[219] = 4.275000;
input[220] = 4.556250;
input[221] = 4.331250;
input[222] = 4.218750;
input[223] = 3.993750;
input[224] = 2.868750;
input[225] = 1.800000;
input[226] = 1.462500;
input[227] = 1.406250;
input[228] = 1.181250;
input[229] = 0.675000;
input[230] = 0.056250;
input[231] = 0.000000;
input[232] = 0.450000;
input[233] = 0.900000;
input[234] = 1.012500;
input[235] = 0.450000;
input[236] = -0.056470;
input[237] = 0.112500;
input[238] = 0.225000;
input[239] = -0.112720;
input[240] = -0.731470;
input[241] = -1.293970;
input[242] = -1.631470;
input[243] = -1.856470;
input[244] = -1.631470;
input[245] = -0.562720;
input[246] = 0.618750;
input[247] = 1.912500;
input[248] = 3.093750;
input[249] = 3.375000;
input[250] = 2.475000;
input[251] = 2.025000;
input[252] = 2.362500;
input[253] = 2.700000;
input[254] = 1.856250;
input[255] = 2.081250;
input[256] = 3.375000;

	
    calc_out = fann_run(ann, input);

	printf("is it blink or norma %f\n", calc_out[0]);

	fann_destroy(ann);
	return 0;
}
