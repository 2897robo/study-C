#include <stdio.h>
#include <string.h>
#include <errno.h>
int main ()
{
	printf("20194487 ����");
	FILE * pFile;
	pFile = fopen ("unexist.ent", "r");
	if (pFile == NULL)
		printf ("%s\n", strerror(errno));
}
