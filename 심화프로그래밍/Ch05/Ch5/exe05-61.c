#include <stdio.h>

int main()
{
	int w, x, y, z, t, temp;

	for(t=0; t<100; t++)
		for(x=10; x<100; x++){
			w = 300 + t;
			y = w*(x%10);
			if( y%10 == 3 && (y/100)%10 == 3 && y/1000 == 3) {
				z = w*(x/10)*10;
				temp = y +z;
				if((temp/100)%10 == 3 && temp%10 ==3)
					printf("3%d * %d = %d + %d = %d\n", w, x, y, z, temp);
			}
		}
}
