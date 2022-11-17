#include <stdio.h>
#include <string.h>
int main ()
{
	printf("20194487 ±è±â¿í");
	char str[] ="This is a simple string";
	char *pch;
	pch = strstr (str, "simple");
	strncpy (pch, "sample", 6);
	puts (str);
}
