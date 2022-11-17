#include <stdio.h>
#include <string.h>
int main ()
{
	printf("20194487 ±è±â¿í");
	char str[] = "memmove can be very useful......";
	memmove (str+20, str+15, 11);
	puts (str);
}
