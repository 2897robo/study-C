#include <stdio.h>
#include <math.h>
int main()
{
  	double a, v, s, h;
	printf("�� ���� ���� : ");	scanf("%lf", &a);
	v = a*a*a*sqrt(2.)/12.;
	s = a*a*sqrt(3.);
	h = a*sqrt(6.)/3.;
 	printf("���� = %f, �ѳ��� = %f, ���� = %f\n", v, s, h);
}
