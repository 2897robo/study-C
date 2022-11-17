#include <stdio.h>
int main()
{
  	double r, area, pi=3.141592;
	printf("반지름 입력 : ");
	scanf("%lf", &r);
	area = pi * r * r;
 	printf("원의 면적 = %f\n", area);
}
