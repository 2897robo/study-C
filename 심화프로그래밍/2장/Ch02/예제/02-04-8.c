#include <stdio.h>
#include <math.h>
int main()
{
	double x=4.0, y=2.5, z=-15.3395;
	printf("%f\n", pow(x, y) );
	printf("%f, %f\n", ceil(y), floor(y));
	printf("%f, %f\n", fabs(z), fmod(x, y));
	printf("%f\n", exp(x));
	printf("%f, %f\n", log(x), log10(x));
}
