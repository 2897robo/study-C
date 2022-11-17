#include <stdio.h>
#include <string.h>
int main()
{
	printf("20194487 ±è±â¿í");
	int i, j;
	char c[30] = "Programming is imagination!";
	for (i=0; i<strlen(c); i++)
		printf("%s\n", &c[i]);
}
