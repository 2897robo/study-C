#include <stdio.h>
int main()
{
	unsigned int i, fibonacci[45] = {1, 1, };
	double golden_ratio;
	for(i = 2; i<45; i++)
		fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
	golden_ratio = (double)fibonacci[44]/(double)fibonacci[43];

	for(i=0; i<45; i++)
		printf("%d, ", fibonacci[i]);
	
	printf("\b\b \nÈ²±Ýºñ = %f\n", golden_ratio);
}
