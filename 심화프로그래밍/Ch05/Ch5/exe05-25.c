#include <stdio.h>
int main()
{
	int x, y, sum=0;
	printf("�� ���� �Է��Ͻÿ� : ");
	scanf("%d%*c%d", &x, &y);

	if(x>y)	// ���� ���� ũ�� 
		x = x + y - ( y = x );	// �� ���� ��ȯ�Ѵ�. 

	while(x <= y)	// �� �� ������ ���� ���Ѵ�. 
		sum += x++;

	printf("sum = %d\n", sum);
}
