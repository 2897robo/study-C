#include <stdio.h> 

int main()
{
	int x,y,z;
	for(x=1; x<10; x++)
		for(y=0; y<10; y++)
			for(z=0; z<10; z++)
				if(x+y+z == 6 && x*y*z == 6 && z%2 == 0 && (x*100+y*10+z)%11 == 0)
					printf("%d%d%dȣ\n", x,y,z);
}

/*
#include <stdio.h> 

int main()
{
	int x, y, z, number;
	for(number=100; number<600; number+=2) {
		x = (number/100);
		y = (number/10)%10;
		z = number%10;
		if(x+y+z == 6 && x*y*z == 6 && number%11 == 0) {
			printf("%dȣ\n", number);
			break;
		}
	}
}
*/
