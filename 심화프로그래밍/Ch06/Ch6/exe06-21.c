#include <stdio.h>

int main()
{
	char base[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char result[100] = "";
	int d, x, y, z=0;

	printf("10�� ������ �Է��Ͻÿ� : ");
	scanf("%d", &d);

	do {		// 2~36������ ���� �Է¹޴´�. 
		printf("��ȯ�� ������ �Է��Ͻÿ�(2~36) : "); 
		scanf("%d", &y); 
	} while(y < 2 || y > 37);

	x = d;
	while(x) {
		result[z++] = base[x%y];	// �������� ����Ͽ� �����Ѵ�. 
		x /= y;	// ���� �����Ѵ�. 
	}
	result[z] = '\0';	// ���ڿ��� ���� NULL ���� ���� 

	printf("\n10���� %d��(��) %d������ �ٲٸ� \"", d, y);
	while(z!=0)			// ����� ������ �Ųٷ� ��� 
		printf("%c", result[--z]);
	printf("\"\n");
}
