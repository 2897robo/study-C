#include <stdio.h>
int main()
{
  	double v, i, r;
	printf("����, ���� �Է� : ");
	scanf("%lf%*c%lf", &i, &r);
	v = i * r;
 	printf("%f * %f = %f\n", i, r, v);
}
