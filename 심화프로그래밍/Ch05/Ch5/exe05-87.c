#include<stdio.h>
 
int main()
{
	int n, c, d, num = 1, space;
	printf("라인수를 입력하시오 : ");
	scanf("%d",&n);

	space = n - 1;

	for ( d = 1 ; d <= n ; d++ ) {
		num = d;
		for ( c = 1 ; c <= space ; c++ )
			printf(" ");
		space--;
		for ( c = 1 ; c <= d ; c++ ) {
			printf("%d", num%10);
			num++;
		}
		num--;
		num--;
		for ( c = 1 ; c < d ; c++) {
			printf("%d", num%10);
			num--;
		}
		printf("\n");
	}
	return 0;
}
