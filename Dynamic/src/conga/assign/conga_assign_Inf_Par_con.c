		
	#include "conga_assign_Inf_Par_con.h"
	
		int conga_assign_Inf_Par_switch[167] = {
	 
	75,  
	75,  
	0,  
	75,  
	1,  
	75,  
	2,  
	75,  
	3,  
	75,  
	75,  
	75,  
	4,  
	75,  
	75,  
	75,  
	75,  
	5,  
	75,  
	75,  
	75,  
	6,  
	7,  
	75,  
	75,  
	8,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	75,  
	9,  
	75,  
	10,  
	11,  
	12,  
	13,  
	75,  
	75,  
	75,  
	75,  
	14,  
	75,  
	15,  
	16,  
	17,  
	18,  
	19,  
	20,  
	21,  
	75,  
	22,  
	75,  
	75,  
	23,  
	75,  
	24,  
	75,  
	75,  
	25,  
	26,  
	27,  
	75,  
	75,  
	75,  
	28,  
	75,  
	75,  
	29,  
	30,  
	75,  
	75,  
	75,  
	31,  
	75,  
	75,  
	75,  
	32,  
	75,  
	33,  
	75,  
	75,  
	34,  
	35,  
	75,  
	36,  
	37,  
	75,  
	38,  
	39,  
	75,  
	40,  
	41,  
	75,  
	42,  
	75,  
	75,  
	43,  
	75,  
	75,  
	44,  
	45,  
	75,  
	46,  
	75,  
	75,  
	75,  
	47,  
	75,  
	48,  
	49,  
	75,  
	50,  
	51,  
	75,  
	52,  
	75,  
	53,  
	75,  
	54,  
	75,  
	55,  
	75,  
	56,  
	57,  
	75,  
	58,  
	59,  
	75,  
	75,  
	60,  
	61,  
	75,  
	62,  
	75,  
	63,  
	75,  
	64,  
	75,  
	65,  
	75,  
	66,  
	67,  
	75,  
	68,  
	75,  
	75,  
	69,  
	75,  
	70,  
	71,  
	75,  
	75,  
	72,  
	73,  
	75,  
	74, 
	};
	
	
		int conga_assign_Inf_Par_base_index[10] = { 1,2,3,5,19,20,21,22,23,24, };
	
	
	void conga_assign_Inf_Par_fn(int _idx, double * a, double *r){
	
		conga_assign_Inf_Par_func[ conga_assign_Inf_Par_switch [_idx] ](a, r);
	}


	

	