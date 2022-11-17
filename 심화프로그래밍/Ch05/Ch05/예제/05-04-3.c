#include <stdio.h>
int main()
{
 	int x, sum=0;
 	printf("Press Ctrl-Z to exit.\n");
 	do {
 		printf("input data : ");
 		if(scanf("%d", &x) == EOF)	// Ctrl-Z가 입력되면 루프를 벗어난다.
 			break;
 		sum += x;
 	} while(1);
 	printf("sum = %d\n", sum);
}
