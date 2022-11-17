#include <stdio.h>
#include <stdarg.h>
 
void printargs(int arg1, ...) /* print all int type args, finishing with -1 */ 
{
	va_list ap;
	int i;

	va_start(ap, arg1); 
	for (i = arg1; i != -1; i = va_arg(ap, int))
		printf("%d ", i);
	va_end(ap);
	putchar('\n');
}
 
int main(void)
{
	printf("20194487 ±è±â¿í\n");
	printargs(5, 2, 14, 84, 97, 15, 24, 48, -1);
	printargs(84, 51, -1);
	printargs(-1);
	printargs(1, -1);
}
