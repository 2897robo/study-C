#include <stdio.h>
int main()
{
	char id[50], at[2], server[50];
	printf("E-mail�Է�: ");
	scanf("%[^@]%[@]%[^\n]", id, at, server);
	printf("���̵� : %s\n���� : %s\n", id, server);
	fflush(stdin);
}
