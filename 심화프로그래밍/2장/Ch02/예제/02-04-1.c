#include <stdio.h>
int main()
{
	double pi=3.141592, radius=5.0;
	double area, circumference;
	area = pi*radius*radius;
	circumference = 2*pi*radius;
	printf("원의 넓이 = %f\n", area);
	printf("원의 둘레 = %f\n", circumference);
}
