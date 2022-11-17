#include <stdio.h>
#include <math.h>
int main()
{
	double a=1., b=-4., c=2., root1, root2;
	root1 = (-b+sqrt(b*b - 4*a*c))/(2*a);
	root2 = (-b-sqrt(b*b - 4*a*c))/(2*a);
	printf("±Ÿ¿∫ = %lf, %lf\n", root1, root2);
}
