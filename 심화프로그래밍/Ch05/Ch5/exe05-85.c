#include <stdio.h>

main() 
{
	int year=0;
	double acount=1000000., interest=0.06, widraw=100000.;
	
	while(acount > 0.0) {
		acount += acount*interest;
		acount -= widraw;
		year++; 
		printf("%2d ³â : %.2f\n", year, acount);
	}
}
