#include <stdio.h>
int main()
{
	int number, sum;
	printf(" ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &number);
	while(number>10) {		// ���ڸ����� �� ������ �ݺ��ϴ� ����
		sum = 0;			// �� �ڸ����� ���� ������ ����
		while(number != 0) {	// �� �ڸ����� �ϳ��� �����ϴ� ����
			sum += number % 10;	// �� ���ڸ��� ���Ѵ�.
			number /= 10;		// 10���� ���� ���ڸ� ���������� �̵��Ѵ�.
		}
		number = sum;
		printf("==> %d ", number);
	}
	printf("���:%d\n", number);		// ���ڸ����� �Ǹ� ����� �ͼ� ����Ѵ�.
}
