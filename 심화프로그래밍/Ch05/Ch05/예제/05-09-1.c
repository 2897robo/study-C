#include <stdio.h>
int main()
{
	int num=1539, count=0, x, y;
	for (x=1; x<= num; x++) {	// 1���� 1539���� �ݺ�
		y = x;
		while (y > 0) { 		// �� ���� 3�� ��� �ִ��� Ȯ�� 
			if (y % 10 == 3) // ���ڸ��� 3�̸� 
				count ++; 	// count�� ���� 
			y /= 10;	 	// �� �ڸ� ������ �̵� 
		}
	}
	printf("count = %d\n", count);
}
