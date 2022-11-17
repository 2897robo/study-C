#include <string.h>
#include <stdio.h>
int main()
{
	printf("20194487 ±è±â¿í");
	char str[] = "This is string.";
	char s[] = "string ";
	
	printf( "%d\n", strcspn( str, s));
}
