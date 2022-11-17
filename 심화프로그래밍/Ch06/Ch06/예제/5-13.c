#include <stdio.h>
#include <string.h>
#include <errno.h>
int main ()
{
	printf("20194487 ±è±â¿í");
	FILE * pFile;
	pFile = fopen ("unexist.ent", "r");
	if (pFile == NULL)
		printf ("%s\n", strerror(errno));
}
