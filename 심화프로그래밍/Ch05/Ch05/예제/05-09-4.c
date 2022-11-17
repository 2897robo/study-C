#include <stdio.h>
#include <math.h>
int main()
{
	int i, j;
	double radian, pi=3.141593;
	for(i=0; i<=360; i+=15) {
		radian = i * pi / 180;
		printf("%3d",i);
		for(j=0; j<= (int)(sin(radian)*30+30); j++)
			printf(" ");
		printf("*\n");
	}
}
