#include <stdio.h>

int isperfect_no(int);		// �Լ� ����

int main()
{
	int i;		 // �Լ��� ��������
	for (i=2; i <= 1000; i++) { 
		if(isperfect_no(i))		// �Լ� ȣ��
			printf("%d��(��) �������̴�.\n\n", i);
	}
}

int isperfect_no(int x)
{
	int sum=0, j;	// �Լ��� ��������
	for (j=1; j <= x/2; j++)	// x�� ����� ���� ���Ѵ�. 
		if (x%j == 0) sum += j;
	return ((x == sum) ? 1 : 0);	// ��� ��ȯ
}
