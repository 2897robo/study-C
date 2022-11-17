#include <string.h>
#include <stdio.h>
int main()
{
	char string[100] = "The 16 men and 21 women ate 3 pigs";
	char *result = string;
	int a[10], i=0, j;
	while( result = strpbrk( result, "0123456789" )) {
		printf("%s\n", result);
		sscanf(result, "%d", &j );
		a[i] = j;
		while(j){
			result++;
			j /= 10;
		}
		i++;
	}
	printf("\n");
	for(j=0; j<i; j++)
		printf("%d, ", a[j]);
}

