#include <stdio.h> 

int main()
{
	int x, y, prime = 1 ; //prime�� �Ҽ� �Ǻ��� ���� ����, 1�̸� �Ҽ��̰�, 0�̸� �Ҽ��� �ƴϴ�. 

	printf("���ڸ� �Է��Ͽ� �ֽʽÿ� : ");
	scanf("%d", &y);

	for (x=2; x<=y/2; x++) {	// 2���� x/2������ ������ ����� 
		if (y%x == 0) {  	// �������� �Ҽ��� �ƴϴ�. 
			prime = 0;	// �׷��� prime�� 0���� �ϰ� 
			break;		// ����������.  
		}
	}

	if (prime == 1) 
		printf(" %d�� �Ҽ��̴�\n", y);
	else 
		printf(" %d�� �Ҽ��� �ƴϴ�\n", y);
}
