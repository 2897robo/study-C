#include <stdio.h>

int main() {
	int i, k=2; // k : �ܼ�, i : 1���� 9���� ��ȭ 

	for (i=1; k<=9; i++) {	// k�� 9���� �۰ų� ���� ������ 
		if (i==1)
			printf("%5d��\n", k); 
		printf("%2d * %2d = %2d\n", k, i, k*i);

		if (i==9) {	// i�� 9�� �Ǹ� 
			k++;	// k�����ϰ� 
			i=0;	// i=0���� �ʱ�ȭ 
			printf("\n");	// �� �ٲ� 
		}
	}
}
