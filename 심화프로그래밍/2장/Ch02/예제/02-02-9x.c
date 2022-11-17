#include <stdio.h>
#include <stdlib.h>
int main()
{
	float x = 3.14159f;
	long long *y;
	long double *z;
	z = (long double*)malloc(sizeof(long double));
	y = (long long*)malloc(sizeof(long long));
	*y = 9223372036854775807LL;
	*z = 10293.123E+1002L;
	printf("float : %f\n", x);
	printf("long long : %lld\n", *y);
	printf("long double : %lE\n", *z);
	printf("long double : %.20lA\n", *z);
	printf("long double : %.20lG\n", *z);

//	printf("\nInput long long int : ");
//	scanf("%I64d", y);
//	printf("%lld\n", *y);

	printf("\nInput long double : ");
	sscanf("1230137.0123E+123", "%Lf", z);
	printf("%le\n", *z);
}
