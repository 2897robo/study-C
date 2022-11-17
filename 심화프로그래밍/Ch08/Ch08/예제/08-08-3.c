#include <stdlib.h>
#include <stdio.h>
// 실수를 비교하는 함수! 
int compare_doubles (const double * x, const double * y)
{
	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;
	else 
		return 0;
}

int main ()
{
	int i=0;
	double a[] = {29.3, 493.2, 9.89, 8393.4, 2939.4, 0.002,
			1929.3, 18.1};
	qsort(a, 8, sizeof(double), compare_doubles);
	printf("after sorting:\n");
	for (i=0;i<8;i++)
		printf("%f\n",a[i]);
}
