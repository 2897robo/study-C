#include <stdio.h>
int main()
{
	int x, sum=0, count=0;
	double ave;
	for(;;) {
		printf("���� ������ �Է��Ͻÿ�(���� : ��) : ");
		scanf("%d", &x);
		if( x < 0 ) // �����̸� ������ ��������. 
			break;
		else if( x > 100 )
			// 100 �̻��̸� ������� �ʰ� for�� ���� ���� ���� ���� 
			continue;
		sum += x;
		count++;
	}
	ave= (double) sum/ (double) count;
	printf(" �հ� : %d, ��� : %f, ���� : %d\n", sum, ave, count);
}
