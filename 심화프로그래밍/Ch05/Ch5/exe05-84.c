#include <stdio.h>

int main()
{
	int x, y, k=2, ex;
	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d%*c%d", &x, &y); 

	while(1) {
		if( (x % k == 0) && (y % k == 0) ) {
			ex = 1;
			break;
		}
		else if( k > x || k > y) {
			ex = 0;
			break;
		}
		k++;
	}
	if( ex )
		printf("���� �Ұ� �ƴϴ�.\n");	
	else 
		printf("���� ���̴�.\n");
}
