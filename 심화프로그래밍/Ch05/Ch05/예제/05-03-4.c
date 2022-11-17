#include <stdio.h>
int main()
{
	int a=1, b, c, d, abc, cac, bdd;
	while(a<10) {
		b=1;
		while(b<10) {
			c=1;
			while(c<10) {
				d=0;
				while(d<10) {
					abc = 100*a+10*b+c;	// abc값 계산
					cac = 100*c+10*a+c;	// cac값 계산
					bdd = 100*b+10*d+d;	// bdd값 계산
					if (abc + cac == bdd)
						printf(" %d\n"
							"+%d\n"
							"-----\n"
							" %d\n\n", abc, cac, bdd);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
