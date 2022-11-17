#include <stdio.h>
#include <stdlib.h>
int main()
{
 	int a, b, *c;
 	c = (int *)malloc(4);
 	scanf("%d %d %d", &a, &b, c);
 	printf("a=%d, b=%d, c=%d\n", a, b, *c);
	free(c);
}
