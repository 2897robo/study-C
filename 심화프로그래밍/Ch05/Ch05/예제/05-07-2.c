#include <stdio.h>
int main()
{
	int number, sum;
	printf(" 숫자를 입력하시오: ");
	scanf("%d", &number);
	for (;number>=10;) {
		sum = 0;
		for (;number != 0; number /= 10)
			sum += number % 10;
		number = sum;
		printf("==> %d ", number);
	}
	printf("결과:%d\n", number);
}
