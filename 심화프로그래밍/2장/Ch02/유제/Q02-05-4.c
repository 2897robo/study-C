#include <stdio.h>
int main()
{
  	double v, i, r;
	printf("전류, 저항 입력 : ");
	scanf("%lf%*c%lf", &i, &r);
	v = i * r;
 	printf("%f * %f = %f\n", i, r, v);
}
