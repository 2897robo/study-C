#include <stdio.h>
int main()
{
	int x=1;
	double sum=0.0;
	
	for(;;){
		sum += 1./x;
		x <<= 1;
		printf("%.8f\n", sum);
		if(x<0)
			break;
	}
	printf("\n%.8f\n", sum);
}
