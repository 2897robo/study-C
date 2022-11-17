#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *str, in_str=0, *pos, s2[100];
	int i=0;
	str = (char *)malloc(400);
	strcpy(str, "Use Split to separate parts from a string.");

	pos = strstr( str, "parts" );
	strcpy(s2, pos);
	*pos = '\0';
	printf( "%s\n", str);
	printf( "%s\n", s2);
 	free(str);
}
