#include <stdio.h>
#include <math.h>
int main()
{
  	double a, v, s, h;
	printf("한 변의 길이 : ");	scanf("%lf", &a);
	v = a*a*a*sqrt(2.)/12.;
	s = a*a*sqrt(3.);
	h = a*sqrt(6.)/3.;
 	printf("부피 = %f, 겉넓이 = %f, 높이 = %f\n", v, s, h);
}
