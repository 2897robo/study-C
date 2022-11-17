#include <stdio.h>
int main()
{
	int a=1, b, c, aa, bb, cc, cba;

	while(a<10) {
		b=1;
		while(b<10) {
			c=1;
			while(c<3){		// c는 2 이하이다. 
				aa = a*10 + a;
				bb = b*10 + b;
				cc = c*10 + c;
				cba = c*100 + b*10 + a;
				if( aa + bb + cc == cba)
					printf("%5d\n+ %3d\n+ %3d\n=%4d\n", aa, bb, cc, cba);
				c++;
			}
			b++;
		}
		a++;
	}
}
