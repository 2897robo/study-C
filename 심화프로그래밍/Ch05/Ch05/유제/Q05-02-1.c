#include <stdio.h>
int main()
{
	int x, d=2; // d�� ó�� 2���� ����
	printf("���� �Է� : ");
	scanf("%d", &x);
	while(1) {
		if(x % d == 0) {
			printf("%d ", d);
			x /= d;
		}
		else
			d++;
		if(x == 1)
			 break;
	}
	printf("\n");
}
