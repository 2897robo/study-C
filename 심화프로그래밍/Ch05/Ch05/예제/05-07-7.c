#include <stdio.h>

int main()
{
 	int x, y, z;
 	for(x=1; x<=98; x++) {
		for(y=x+1; y<=99; y++) {
			for(z=y+1; z<=100; z++) {
				if(x*x + y*y == z*z)
					printf(" %d, %d, %d\n", x, y, z);
			}
		}
	}
}
