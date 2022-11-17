#include <stdio.h>
#include <string.h>
int main ()
{
	printf("20194487 ±è±â¿í");
	char str[] = "This is a sample string";
	char key[] = "aeiou";
	char * pch;
	printf ("Vowels in '%s': ", str);
	pch = strpbrk (str, key);
	while (pch != NULL)
	{
		printf ("%c " , *pch);
		pch = strpbrk (pch+1, key);
	}
	printf ("\n");
}
