#include <stdio.h>
#include <string.h>
int main ()
{
	printf("20194487 ±è±â¿í");
	char * pch;
	char str[] = "Example string";
	pch = (char*) memchr (str, 'p', strlen(str));
	if (pch != NULL)
		printf ("'p' found at position %d.\n", pch - str + 1);
	else
		printf ("'p' not found.\n");
}
