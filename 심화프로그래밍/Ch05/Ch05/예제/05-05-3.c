#include <stdio.h>
int main()
{
	int x, d=1;
	printf("���� �Է� : ");
	scanf("%d", &x);
	printf("%d�� ��� = ", x);
	for ( ; x/2 >= d; d++)
		if (x % d == 0)
			printf("%d ", d);
	printf("%d \n", x); // �ڱ� �ڽ� ��� 
}
