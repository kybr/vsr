		#ifndef BIV_H_INCLUDED
		#define BIV_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
		
		
inline Biv involute (const Biv& a) { 
	return Biv (a[0],a[1],a[2]);
}
			
		 
		
		
inline Biv reverse (const Biv& a) { 
	return Biv (-a[0],-a[1],-a[2]);
}
			
		 
		
		
inline Biv conjugate (const Biv& a) { 
	return Biv (-a[0],-a[1],-a[2]);
}
			
		 
template<> inline Biv cast<Biv,Rot> (const Rot& a) {
		return Biv (a[1],a[2],a[3]);
}  
		 
inline Biv gp (const Biv& a, const Sca& b) { 
	return Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Vec_Biv gp (const Biv& a, const Vec& b) { 
	return Vec_Biv (
a[0] * b[1] + a[1] * b[2],
 - a[0] * b[0] + a[2] * b[2],
 - a[1] * b[0] - a[2] * b[1],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Rot gp (const Biv& a, const Biv& b) { 
	return Rot (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1],
a[0] * b[2] - a[2] * b[0],
 - a[0] * b[1] + a[1] * b[0]
);
}			
		 
inline Vec gp (const Biv& a, const Tri& b) { 
	return Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		 
inline Rot gp (const Biv& a, const Rot& b) { 
	return Rot (
 - a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
 - a[0] * b[2] + a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Biv op (const Biv& a, const Sca& b) { 
	return Biv (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0]
);
}			
		 
inline Tri op (const Biv& a, const Vec& b) { 
	return Tri (
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Sca op (const Biv& a, const Biv& b) { 
	return Sca (
);
}			
		 
inline Sca op (const Biv& a, const Tri& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Biv& a, const Sca& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Biv& a, const Vec& b) { 
	return Sca (
);
}			
		 
inline Sca ip (const Biv& a, const Biv& b) { 
	return Sca (
 - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]
);
}			
		 
inline Vec ip (const Biv& a, const Tri& b) { 
	return Vec (
 - a[2] * b[0],
a[1] * b[0],
 - a[0] * b[0]
);
}			
		  	
inline Biv sp (const Biv& biv, const Rot& rot) {					
					
const Rot& t1 = rot;
const Biv& t2 = biv;
Rot t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Biv (
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);

}
		
	
	  	
inline Rot sp0 (const Biv& biv, const Rot& rot) {					
					
const Rot& t1 = rot;
const Biv& t2 = biv;
Rot t3 (
 - t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Rot(
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]
);
}
		
	
		
	} //vsr::
	#endif
	