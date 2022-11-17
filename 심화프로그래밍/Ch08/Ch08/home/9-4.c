#include <stdio.h>
#include <stdarg.h>

double sum_series(int num, ...);

/* Variable length argument example - sum a series. */ 
int main(void)
{
	printf("20194487 ±è±â¿í\n");
	double d;

	d = sum_series(5, 0.5, 0.25, 0.125, 0.0625, 0.03125);

	printf("Sum of series is %f.\n", d);
}

double sum_series(int num, ...)
{
	double sum=0.0, t;
	va_list argptr;

	/* initialize argptr */ 
	va_start(argptr, num);

	/* sum the series */ 
	for( ; num; num--) {
		t = va_arg(argptr, double); /* get next argument */ 
		sum += t;
	}

	/* do orderly shutdown */ 
	va_end(argptr);
	return sum;
}
