#include <stdio.h>

int main()
{
	double f=1.0, e = 1.0, i=1.0;
	while(1.0/f > 0.00000000001){
		f *= i;
		e += 1.0 / f;
		i += 1.0;
	}
	printf(" %10.8lf\n", e);
}

/*
#include <stdio.h>

int main()
{
	int x, f;
	double e;
	for(x=1, f=1, e=1.0; f > 0; ++x, f *= x)
		e += 1./f;
	printf("%f\n", e);
}
*/

/*
#include <stdio.h>

int main()
{
	int x=1, f=1;
	double e=1.0;
	while(f > 0) {
		e += 1./f;
		f *= ++x;
	}
	printf("%f\n", e);
}
*/
