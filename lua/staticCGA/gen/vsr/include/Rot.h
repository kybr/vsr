		#ifndef ROT_H_INCLUDED
		#define ROT_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
		
		
inline Rot involute (const Rot& a) { 
	return Rot (a[0],a[1],a[2],a[3]);
}
			
		 
		
		
inline Rot reverse (const Rot& a) { 
	return Rot (a[0],-a[1],-a[2],-a[3]);
}
			
		 
		
		
inline Rot conjugate (const Rot& a) { 
	return Rot (a[0],-a[1],-a[2],-a[3]);
}
			
		 
template<> inline Rot cast<Rot,Sca> (const Sca& a) {
		return Rot (a[0]);
}  
		 
template<> inline Rot cast<Rot,Biv> (const Biv& a) {
		return Rot (a[0],a[1],a[2]);
}  
		 
inline Rot gp (const Rot& a, const Sca& b) { 
	return Rot (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
inline Vec_Biv gp (const Rot& a, const Vec& b) { 
	return Vec_Biv (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
inline Rot gp (const Rot& a, const Biv& b) { 
	return Rot (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0]
);
}			
		 
inline Vec_Biv gp (const Rot& a, const Tri& b) { 
	return Vec_Biv (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0]
);
}			
		 
inline Rot gp (const Rot& a, const Rot& b) { 
	return Rot (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0]
);
}			
			
	} //vsr::
	#endif
	