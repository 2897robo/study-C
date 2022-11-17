#include <stdio.h>
#include <string.h>
int main ()
{
	printf("20194487 ±è±â¿í");
	char str[] ="- This, a sample string.";
	char * pch;
	printf ("Splitting string \"%s\" into tokens:\n", str);
	pch = strtok (str, " ,.-");
	while (pch != NULL)
	{
		printf ("%s\n", pch);
		pch = strtok (NULL, " ,.-");
	}
}
