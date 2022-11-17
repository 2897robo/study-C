#include <stdio.h>
int main()
{
	double radius=10.0, angle=60., length;
	double const pi = 3.141592;
	length = 2. * pi * radius * angle / 360.;
	printf("호의 길이 = %f\n", length);
}
