#include <stdio.h>

int main() {
	int n, sum=0, i;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	i = n % 2 ? 1 : 2;
/*
	if(n % 2)
		i=1;
	else
		i=2;
*/
	for(; i<=n; i+=2)
		sum += i;
	printf("sum = %d\n", sum);
}
