#include <stdio.h>
#include <math.h>
int main()
{
	const double pi=3.141592;
	double degree=30., s, c, t;
	printf("��� ����� ������ �����ϴ�.\n");
	s = sin(degree*pi/180.0); 
	c = cos(degree*pi/180.0);
	t = tan(degree*pi/180.0);
	printf("sin(%f) = %f\n", degree, s);
	printf("cos(%f) = %f\n", degree, c);
	printf("tan(%f) = %f\n", degree, t);

   	// �ٽ� ������ ����� ���� 180/3.141592�� ���Ѵ�. 
	printf("asin(%f) = %f\n", s, asin(s)*180/pi);
	printf("acos(%f) = %f\n", c, acos(c)*180/pi);
	printf("atan(%f) = %f\n", t, atan(t)*180/pi);
}
