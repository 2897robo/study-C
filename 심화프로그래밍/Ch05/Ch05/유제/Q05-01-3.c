#include <stdio.h>
int main()
{
	int n, reverse = 0;
	printf("������ �Է��Ͻÿ� : \n");
	scanf("%d",&n);

	while (n)
	{
		reverse *= 10;
		reverse += n%10;
		n /= 10;
	}
	printf("�Ųٷ� ���� �� = %d\n", reverse);
}
