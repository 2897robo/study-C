#include <stdio.h>

int main()
{
	int number, divider, count;

	for(number=1; number<=10; number++) {
		count = 0;
		printf("%3d�� ��� : ", number);
		for(divider=1; divider<=number; divider++)
			if( number % divider == 0 ) {
				printf("%3d ", divider);
				count++;
			} 
		if(count == 2) // ����� ������ 2���̸� �Ҽ� 
			printf("==> �Ҽ�");
		printf("\n");
	}
}
