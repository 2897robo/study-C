#include <stdio.h>
int main()
{
	int a=1, b, c, d, acb, bbc, bdc;

	while(a<10) {
		b=1;
		while(b<10) {
			c=0;
			while(c<10){
				d = 0;
				while( d< 10){
					acb = a*100 + c*10 + b;
					bbc = b*100 + b*10 + c;
					bdc = b*100 + d*10 + c;
					if(acb - bbc ==  bdc) {
						printf("%d - %d = %d\n", acb, bbc, bdc);
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
