#include <stdio.h>
#include <string.h>
int main ()
{
	printf("20194487 ±è±â¿í");
	char str[] = "almost every programmer should know memset!";
	memset (str, '-', 6);
	puts (str);
}
