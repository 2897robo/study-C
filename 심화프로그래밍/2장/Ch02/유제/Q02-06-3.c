#include <stdio.h>
int main()
{
 	char protocol[50], delimiter[5], server[80];
 	printf("URL�Է�: ");
 	scanf("%[^:]%[:/]%[^\n]", protocol, delimiter, server);
 	printf("�������� : %s\n���� : %s\n", protocol, server);
 	fflush(stdin);
}
