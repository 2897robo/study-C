#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int maxof(int, ...) ;
void f(void);

int main() {
	printf("20194487 ??????\n");
	f();
}

int maxof(int n_args, ...) {
	register int i;
	int max, a;
	va_list ap;

	va_start(ap, n_args);
	max = va_arg(ap, int);
	for(i = 2; i <= n_args; i++) {
		if((a = va_arg(ap, int)) > max)
			max = a;
	}

	va_end(ap);
	return max;
}

void f(void) {
	int i = 5;
	int j = 24;
	printf("%d\n", maxof(3, i, j, 55));
}
