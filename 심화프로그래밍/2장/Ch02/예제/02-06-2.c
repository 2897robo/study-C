#include <stdio.h>
int main()
{
	char string[100];
	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", string);
 	printf("�Էµ� ���ڿ� = %s\n", string);
	fflush(stdin); 
	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%[^\n]", string);
	printf("�Էµ� ���ڿ� = %s\n", string);
}
