		
	#include "conga_assign_Trs_Dil_con.h"
	
		int conga_assign_Trs_Dil_switch[167] = {
	 
	0,  
	60,  
	60,  
	1,  
	60,  
	60,  
	60,  
	2,  
	60,  
	60,  
	3,  
	4,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	5,  
	6,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	7,  
	8,  
	9,  
	10,  
	11,  
	12,  
	13,  
	14,  
	15,  
	16,  
	17,  
	18,  
	60,  
	60,  
	19,  
	60,  
	60,  
	60,  
	60,  
	20,  
	21,  
	22,  
	60,  
	60,  
	23,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	24,  
	60,  
	25,  
	26,  
	60,  
	60,  
	60,  
	27,  
	28,  
	60,  
	60,  
	60,  
	60,  
	60,  
	29,  
	60,  
	60,  
	30,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	31,  
	32,  
	60,  
	60,  
	33,  
	60,  
	60,  
	34,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	35,  
	60,  
	60,  
	36,  
	60,  
	60,  
	37,  
	60,  
	60,  
	38,  
	60,  
	60,  
	60,  
	60,  
	60,  
	60,  
	39,  
	60,  
	40,  
	60,  
	60,  
	41,  
	60,  
	60,  
	60,  
	60,  
	42,  
	60,  
	43,  
	60,  
	44,  
	60,  
	45,  
	60,  
	60,  
	46,  
	60,  
	60,  
	47,  
	48,  
	60,  
	60,  
	49,  
	60,  
	50,  
	60,  
	51,  
	60,  
	60,  
	60,  
	52,  
	60,  
	60,  
	53,  
	60,  
	60,  
	54,  
	60,  
	55,  
	60,  
	60,  
	56,  
	57,  
	60,  
	60,  
	58,  
	59, 
	};
	
	
		int conga_assign_Trs_Dil_base_index[5] = { 0,12,13,14,15, };
	
	
	void conga_assign_Trs_Dil_fn(int _idx, double * a, double *r){
	
		conga_assign_Trs_Dil_func[ conga_assign_Trs_Dil_switch [_idx] ](a, r);
	}


	

	