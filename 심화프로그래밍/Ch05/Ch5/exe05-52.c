#include <stdio.h>

int main()
{
	int number, divider, count;

	printf("���α׷����� ����̴�.\n");

	for(number=1; number<=50; number++) {
		count = 0;
		printf("%3d�� ��� : ", number);
		for(divider=1; divider<=number/2; divider++) {
			if(number % divider == 0) {
				printf("%3d, ", divider);
				count++;
			}
		}
		count++;
		printf("%3d ", number);
		if(count == 2)		// ����� ������ 2���̸� �Ҽ� 
			printf("�Ҽ�");
		else if(count % 2)		// ����� ������ Ȧ�� ���̸� ������ 
			printf("������");
		printf("\n");
	}
}
