#include <stdio.h>

main()
{
	int farenheit;	// È­¾¾ 
	double celcius;	// ¼·¾¾ 
	// ¼·¾¾ = (5/9)*(È­¾¾-32); 
	// È­¾¾ = (9/5)*¼·¾¾+32; 

	for( farenheit=-10; farenheit<=130; farenheit+=5) {
		celcius = (5./9.)*(farenheit-32.);
		printf("È­¾¾ %3d = ¼·¾¾ %5.1f\n", farenheit, celcius);
	}
}
