#include <stdio.h>
#include <math.h>
int main()
{
	const double pi=3.141592;
	double degree=30., s, c, t;
	printf("계산 결과는 다음과 같습니다.\n");
	s = sin(degree*pi/180.0); 
	c = cos(degree*pi/180.0);
	t = tan(degree*pi/180.0);
	printf("sin(%f) = %f\n", degree, s);
	printf("cos(%f) = %f\n", degree, c);
	printf("tan(%f) = %f\n", degree, t);

   	// 다시 각도로 만들기 위해 180/3.141592를 곱한다. 
	printf("asin(%f) = %f\n", s, asin(s)*180/pi);
	printf("acos(%f) = %f\n", c, acos(c)*180/pi);
	printf("atan(%f) = %f\n", t, atan(t)*180/pi);
}
