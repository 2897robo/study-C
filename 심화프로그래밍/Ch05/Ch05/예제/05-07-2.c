#include <stdio.h>
int main()
{
	int number, sum;
	printf(" ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &number);
	for (;number>=10;) {
		sum = 0;
		for (;number != 0; number /= 10)
			sum += number % 10;
		number = sum;
		printf("==> %d ", number);
	}
	printf("���:%d\n", number);
}
