#include <stdio.h>
int main()
{
	int count =1;		// �ʱ갪 
	while(1) {		// �ݺ��� ���� �˻�, ���⼭�� ������ 1�̹Ƿ� ���� �����̴�.
		printf("%d ", count);
		count++;		// ������ ��� ������ ��ȭ��Ŵ 
		if(count>10)	// ������ ����� ���� �˻�
			break;
	}
}
