#include <stdio.h>
#include <limits.h>

int main()
{
	int x, counter=0;
	unsigned int y;	// ����� �����Ѵ�. �׷��� ������ ���� Shift���꿡�� ������ �߻��Ѵ�. 
	printf("���� �Է� : ");
	scanf("%d", &x);

	y = INT_MIN;		// 10000000 00000000 00000000 00000000 = -2147483648 = 0x80000000 
	while( y != 0 ) {
		counter++;
		if(x & y)		// �� �ڸ��� ���Ͽ� 1�̸� 1�� ����ϰ� 
			printf("1");
		else 		// �׷��� ������ 0�� ����Ѵ�. 
			printf("0");
		y >>= 1;		// ���������� ���ڸ� �� shift�Ͽ� 1�� ��ġ�� �����Ѵ�. 
		if(counter % 8 == 0)	// ���� 8���� ��µǸ� ������ �ϳ� ����Ѵ�. 
			printf(" ");
	}
	printf("\n");
}
