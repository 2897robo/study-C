#include <stdio.h>

int main()
{
	int a, b, x, sum=0;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);

	for(a=1; a<=x; a++) {
		sum = 0;
		printf("(");		// ������ �� ��ȣ(�� ����Ѵ�. 
		for(b=1; b<=a; b++) {
			printf("%d", b);
			if(a != b)
				printf("+");
			sum += b;		// �հ踦 �����Ѵ�. 
		}
		printf(")=%d\n", sum);		// ���� �� ��ȣ)�� =�� ����ϰ� ���� ����Ѵ�. 
	}
}
