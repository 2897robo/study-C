#include <stdio.h>
int main()
{
	printf("20194487 ����\n");

	int count=1;		// �ʱ갪 
	for(;;) {
		printf("%d ", count);
		count++;		// ������ ��� ������ ��ȭ��Ŵ 
		if(count>10)	// ������ ����� ���� �˻�
			break;
	}
}
