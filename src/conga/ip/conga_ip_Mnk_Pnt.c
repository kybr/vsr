
#include "conga_ip_Mnk_Pnt.h"


double * conga_ip_103_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_103_2(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_3(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_4(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_6(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[4] * b[0] ;
	
	
	//_e13
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_ip_103_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_103_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[0]  + a[4] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e12ni
	r[6] = a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[2]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_103_12(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_103_13(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_14(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_103_15(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_103_16(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_17(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_ip_103_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3] ;
	
	
	//_e2ni
	r[8] = a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_103_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[0]  + a[4] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e12ni
	r[6] = a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[2]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_20(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_21(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_103_22(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_103_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_103_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_103_26(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_103_28(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_103_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_31(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1] ;
	
	
	//_ni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	//_e123
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_103_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_103_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[5]  + a[4] * b[7]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[6]  + a[3] * b[7] ;
	
	
	//_no
	r[3] = a[0] * b[4] ;
	
	
	//_ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[6] ;
	
	
	//_e123
	r[3] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_103_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4] ;
	
	
	//_ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[11]  + a[4] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[11] ;
	
	
	//_e13no
	r[6] = a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4] ;
	
	
	//_ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[11]  + a[4] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[11] ;
	
	
	//_e13no
	r[6] = a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[15]  + a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_103_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_43(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[1]  + a[4] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[2]  + a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[0] ;
	
	
	//_ni
	r[4] = a[1] * b[0]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[1] ;
	
	
	//_e13no
	r[6] = a[0] * b[2] ;
	
	
	//_e23no
	r[7] = a[0] * b[3] ;
	
	
	//_e12ni
	r[8] = a[1] * b[1]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[2]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[0]  + a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_e12
	r[1] = a[4] * b[3] ;
	
	
	//_e13
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[2] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[0] ;
	
	
	//_e2ni
	r[8] = a[1] * b[1] ;
	
	
	//_e3ni
	r[9] = a[1] * b[2] ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[2] * b[11]  + a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[4] * b[15] ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1  + a[3] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1  + a[2] * b[15] ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[12] ;
	
	
	//_e3ni
	r[9] = a[1] * b[13] ;
	
	
	//_e123no
	r[10] = a[0] * b[15]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[15] ;
	
	
	return r;
}

double * conga_ip_103_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1]  + a[2] * b[7]  + a[4] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_ni
	r[4] = a[1] * b[6]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[7] ;
	
	
	//_e13no
	r[6] = a[0] * b[8] ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[11]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_103_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_e123
	r[3] = a[0] * b[11]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_103_50(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	//_e123
	r[3] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1  + a[4] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1  + a[2] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[5] ;
	
	
	//_e3ni
	r[9] = a[1] * b[6] ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_103_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[4]  + a[4] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_103_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_103_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[4] ;
	
	
	//_e2ni
	r[5] = a[1] * b[5] ;
	
	
	//_e3ni
	r[6] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7] ;
	
	
	//_e1no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[5] ;
	
	
	//_e2ni
	r[5] = a[1] * b[6] ;
	
	
	//_e3ni
	r[6] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_103_59(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1  + a[4] * b[3] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1  + a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_103_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[11]  + a[4] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[11] ;
	
	
	//_e13no
	r[6] = a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_103_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[2] * b[10]  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[4] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1  + a[2] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_103_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[6]  + a[4] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[10]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_103_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[5]  + a[2] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[6]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e12
	r[1] = a[1] * b[3]  * -1  + a[4] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[5]  * -1  + a[2] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8] ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_103_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3]  + a[4] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[5] ;
	
	
	//_e3ni
	r[9] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  + a[4] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	//_e123
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_71(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1  + a[4] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[2] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[9] ;
	
	
	//_e2ni
	r[8] = a[1] * b[10] ;
	
	
	//_e3ni
	r[9] = a[1] * b[11] ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_103_73(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[4] * b[1] ;
	
	
	//_e13
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[2] * b[1] ;
	
	
	//_e123no
	r[3] = a[0] * b[1]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[1] ;
	
	
	return r;
}

double * conga_ip_103_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3]  + a[4] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[7]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3]  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4]  + a[2] * b[9]  + a[4] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e12no
	r[3] = a[0] * b[9] ;
	
	
	//_e13no
	r[4] = a[0] * b[10] ;
	
	
	//_e23no
	r[5] = a[0] * b[11] ;
	
	
	//_e12ni
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_103_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3]  + a[4] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[6]  + a[4] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[4] ;
	
	
	//_e2ni
	r[5] = a[1] * b[5] ;
	
	
	//_e3ni
	r[6] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e1no
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[3] ;
	
	
	//_e2ni
	r[5] = a[1] * b[4] ;
	
	
	//_e3ni
	r[6] = a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_103_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[3]  + a[4] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[2] * b[6]  + a[4] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[5]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_83(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0]  * -1  + a[4] * b[4] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  * -1  + a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[4] ;
	
	
	return r;
}

double * conga_ip_103_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9] ;
	
	
	//_e12
	r[1] = a[1] * b[4]  * -1  + a[4] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6]  * -1  + a[2] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9] ;
	
	
	//_e123no
	r[10] = a[0] * b[11]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_103_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[5]  + a[2] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[6]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_103_86(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_87(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[0]  * -1  + a[4] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  * -1  + a[2] * b[3] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_e12
	r[1] = a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_103_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[11]  + a[4] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[2] * b[12]  + a[3] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[11] ;
	
	
	//_e13no
	r[6] = a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_103_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[2] * b[10]  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[4] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1  + a[2] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_103_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[2] * b[6]  + a[4] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[5]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[10]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_103_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[2] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[4] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[2] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8] ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_103_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[5] ;
	
	
	//_e123
	r[3] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[4] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[2] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9] ;
	
	
	//_e123no
	r[10] = a[0] * b[11]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_103_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9] ;
	
	
	//_e12
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_103_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[2] * b[6]  + a[4] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[5]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_103_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e12
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_103_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_103_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[2] * b[6]  + a[4] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_103_102(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[0]  * -1  + a[4] * b[4] ;
	
	
	//_e13
	r[1] = a[0] * b[1]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[2]  * -1  + a[2] * b[4] ;
	
	
	//_e123no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[4] ;
	
	
	return r;
}

double * conga_ip_103_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4] ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[2] ;
	
	
	//_e2ni
	r[5] = a[1] * b[3] ;
	
	
	//_e3ni
	r[6] = a[1] * b[4] ;
	
	
	return r;
}

double * conga_ip_103_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[1] * b[1]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[1] * b[2]  + a[2] * b[7]  + a[4] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_e12no
	r[3] = a[0] * b[7] ;
	
	
	//_e13no
	r[4] = a[0] * b[8] ;
	
	
	//_e23no
	r[5] = a[0] * b[9] ;
	
	
	//_e12ni
	r[6] = a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_105(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1  + a[4] * b[9] ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[2] * b[9] ;
	
	
	//_e123no
	r[3] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_103_106(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1]  + a[2] * b[6]  + a[4] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2]  + a[2] * b[7]  + a[3] * b[8] ;
	
	
	//_e12no
	r[3] = a[0] * b[6] ;
	
	
	//_e13no
	r[4] = a[0] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[8] ;
	
	
	//_e12ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_108(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_109(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  + a[4] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[1] ;
	
	
	//_e2ni
	r[5] = a[1] * b[2] ;
	
	
	//_e3ni
	r[6] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_112(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[0]  + a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_e1no
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[0] ;
	
	
	//_e2ni
	r[5] = a[1] * b[1] ;
	
	
	//_e3ni
	r[6] = a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_103_113(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[0]  + a[4] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e12ni
	r[6] = a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[1] ;
	
	
	//_e2ni
	r[5] = a[1] * b[2] ;
	
	
	//_e3ni
	r[6] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[2] * b[3]  + a[4] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[2]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_116(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_ip_103_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[2] * b[11]  + a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[12] ;
	
	
	//_e3ni
	r[9] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_103_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3]  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4]  + a[2] * b[9]  + a[4] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[10]  + a[3] * b[11] ;
	
	
	//_e12no
	r[3] = a[0] * b[9] ;
	
	
	//_e13no
	r[4] = a[0] * b[10] ;
	
	
	//_e23no
	r[5] = a[0] * b[11] ;
	
	
	//_e12ni
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[13]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_103_120(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1  + a[4] * b[7] ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1  + a[2] * b[7] ;
	
	
	//_e123no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_103_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[9]  + a[3] * b[10]  + a[4] * b[11] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[9] ;
	
	
	//_e2ni
	r[8] = a[1] * b[10] ;
	
	
	//_e3ni
	r[9] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_103_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_103_123(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_103_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[2] * b[0]  + a[4] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[1]  + a[3] * b[2] ;
	
	
	//_e12no
	r[3] = a[0] * b[0] ;
	
	
	//_e13no
	r[4] = a[0] * b[1] ;
	
	
	//_e23no
	r[5] = a[0] * b[2] ;
	
	
	//_e12ni
	r[6] = a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[2]  * -1 ;
	
	
	//_e123
	r[9] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e12
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3] ;
	
	
	//_e2ni
	r[8] = a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_103_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[2] * b[11]  + a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[12] ;
	
	
	//_e3ni
	r[9] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_103_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4]  + a[2] * b[10]  + a[4] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[10] ;
	
	
	//_e13no
	r[6] = a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[14]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_103_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1  + a[4] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1  + a[2] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8] ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_103_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4]  + a[2] * b[10]  + a[4] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[10] ;
	
	
	//_e13no
	r[6] = a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_103_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[2] * b[10]  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_103_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_134(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[2] * b[10]  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_103_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[10]  + a[4] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12no
	r[3] = a[0] * b[10] ;
	
	
	//_e13no
	r[4] = a[0] * b[11] ;
	
	
	//_e23no
	r[5] = a[0] * b[12] ;
	
	
	//_e12ni
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[14]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_103_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[2] * b[11]  + a[3] * b[12]  + a[4] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[4] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1  + a[2] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[12] ;
	
	
	//_e3ni
	r[9] = a[1] * b[13] ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_103_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1  + a[4] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1  + a[2] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8] ;
	
	
	//_e123no
	r[10] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_103_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1]  + a[2] * b[7]  + a[4] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2]  + a[2] * b[8]  + a[3] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_ni
	r[4] = a[1] * b[6]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[7] ;
	
	
	//_e13no
	r[6] = a[0] * b[8] ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4]  + a[2] * b[10]  + a[4] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[10] ;
	
	
	//_e13no
	r[6] = a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_103_141(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e12
	r[1] = a[4] * b[7] ;
	
	
	//_e13
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[2] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3] ;
	
	
	//_e2ni
	r[8] = a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[1] * b[5] ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_103_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[4] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[2] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3] ;
	
	
	//_e2ni
	r[8] = a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[1] * b[5] ;
	
	
	//_e123no
	r[10] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[4]  + a[4] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_146(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_148(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_149(double * a, double * b, double *r) { 
	
	//_e123
	r[0] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_103_150(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[2] * b[4]  + a[4] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[2]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_103_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_e12
	r[1] = a[1] * b[1]  * -1  + a[4] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[2]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3]  * -1  + a[2] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[5] ;
	
	
	//_e3ni
	r[9] = a[1] * b[6] ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_103_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1  + a[4] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[2] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[1] * b[10] ;
	
	
	//_e123no
	r[10] = a[0] * b[11]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_103_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[7]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_e12
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[5] ;
	
	
	//_e3ni
	r[9] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[2] * b[3]  + a[4] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[2]  + a[2] * b[4]  + a[3] * b[5] ;
	
	
	//_e12no
	r[3] = a[0] * b[3] ;
	
	
	//_e13no
	r[4] = a[0] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[5] ;
	
	
	//_e12ni
	r[6] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[1] * b[1]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[1] * b[2]  + a[2] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3]  + a[2] * b[9]  + a[3] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_158(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1  + a[4] * b[10] ;
	
	
	//_e13
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[2] * b[10] ;
	
	
	//_e123no
	r[3] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[4] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_103_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[10]  + a[4] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12no
	r[3] = a[0] * b[10] ;
	
	
	//_e13no
	r[4] = a[0] * b[11] ;
	
	
	//_e23no
	r[5] = a[0] * b[12] ;
	
	
	//_e12ni
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_103_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[2] * b[10]  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[4] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1  + a[2] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_103_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[2] * b[10]  + a[3] * b[11]  + a[4] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[4] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1  + a[2] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_103_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[10]  + a[4] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[2] * b[11]  + a[3] * b[12] ;
	
	
	//_e12no
	r[3] = a[0] * b[10] ;
	
	
	//_e13no
	r[4] = a[0] * b[11] ;
	
	
	//_e23no
	r[5] = a[0] * b[12] ;
	
	
	//_e12ni
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[7] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[8] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[9] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_103_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[2] * b[4]  + a[4] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[2]  + a[2] * b[5]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e12
	r[1] = a[1] * b[0]  * -1  + a[4] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[2]  * -1  + a[2] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3] ;
	
	
	//_e2ni
	r[8] = a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[1] * b[5] ;
	
	
	//_e123no
	r[10] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_103_165(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_166(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_ni
	r[4] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_103_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  * -1  + a[2] * b[22]  + a[3] * b[23]  + a[4] * b[24] ;
	
	
	//_e1
	r[1] = a[0] * b[12]  + a[1] * b[9]  + a[3] * b[26]  * -1  + a[4] * b[27]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[13]  + a[1] * b[10]  + a[2] * b[26]  + a[4] * b[28]  * -1 ;
	
	
	//_e3
	r[3] = a[0] * b[14]  + a[1] * b[11]  + a[2] * b[27]  + a[3] * b[28] ;
	
	
	//_no
	r[4] = a[0] * b[15] ;
	
	
	//_ni
	r[5] = a[1] * b[15]  * -1 ;
	
	
	//_e12
	r[6] = a[0] * b[19]  * -1  + a[1] * b[16]  * -1  + a[4] * b[31] ;
	
	
	//_e13
	r[7] = a[0] * b[20]  * -1  + a[1] * b[17]  * -1  + a[3] * b[31]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[21]  * -1  + a[1] * b[18]  * -1  + a[2] * b[31] ;
	
	
	//_e1no
	r[9] = a[0] * b[22]  * -1 ;
	
	
	//_e2no
	r[10] = a[0] * b[23]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[24]  * -1 ;
	
	
	//_e1ni
	r[12] = a[1] * b[22] ;
	
	
	//_e2ni
	r[13] = a[1] * b[23] ;
	
	
	//_e3ni
	r[14] = a[1] * b[24] ;
	
	
	//_e12no
	r[15] = a[0] * b[26] ;
	
	
	//_e13no
	r[16] = a[0] * b[27] ;
	
	
	//_e23no
	r[17] = a[0] * b[28] ;
	
	
	//_e12ni
	r[18] = a[1] * b[26]  * -1 ;
	
	
	//_e13ni
	r[19] = a[1] * b[27]  * -1 ;
	
	
	//_e23ni
	r[20] = a[1] * b[28]  * -1 ;
	
	
	//_e123
	r[21] = a[0] * b[30]  + a[1] * b[29] ;
	
	
	//_e123no
	r[22] = a[0] * b[31]  * -1 ;
	
	
	//_e123ni
	r[23] = a[1] * b[31] ;
	
	
	return r;
}

