#include <stdio.h>
int main()
{
	char address[50], zipcode[20];
	printf("�����ȣ�� �ּ� �Է� : ");
	scanf("%[0123456789-]%*c%[^\n]",	zipcode, address);
	printf("�����ȣ : %s\n�ּ� : %s\n",zipcode, address);
}
