#include <stdio.h>
int main()
{
	int a, b, c, d, e, f, ab, cd, ef;
	for(a=1; a<9; a++) {
		for(b=1; b<9; b++) {
		   if(a^b)
			for(c=a+1; c<9; c++) {
			   if(b^c && a^c)
				for(d=1; d<9; d++) {
				   if(c^d && a^d && b^d) {
					ab = a*10 + b;
					cd = c*10 + d;
					ef = ab + cd;
					if(ef < 90 && ef%10<9 && ef%10 != 0 ) {
					   e = ef/10;
					   f = ef%10;
					   if( a^e && b^e && c^e && d^e && a^f && b^f && c^f && e^f)
						printf("%d + %d = %d\n", ab, cd, ef);
					} // if
				   } // if 
				} // 네 번째 for
			} // 세 번째 for
		} // 두 번째 for
	} // 첫 번째 for
}
