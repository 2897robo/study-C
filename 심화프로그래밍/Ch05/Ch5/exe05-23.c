#include <stdio.h>

int main()
{
	int x, prime=1, divider = 2; // prime�� 1�̸� �Ҽ�, 0�̸� �Ҽ� �ƴ�. 
	// divider�� 2���� 1�� ������Ű�� �Էµ� ���� ������������ �˻��ϱ� ���� ���� 
	printf("�Ҽ��� ���� ���� �Է��Ͻÿ� : ");
	scanf("%d", &x);

	while(x/2 > divider) { // x�� 1/2���� �˻�. 
		if( x % divider == 0) {  // � ���� ���������� 
			prime = 0;	// �Ҽ��� �ƴ� 
			break;		// ������ ���� 
		}
		divider++;	// �׷��� ������ ������ ���� 1 ���� 
		// ������ �ݺ����� ���� ���������� ���� ������ prime�� 1�� ���� 
	}
	if(prime)
		printf("%d is Prime number!\n", x);
	else 
		printf("%d is Not prime number.\n", x);
}
