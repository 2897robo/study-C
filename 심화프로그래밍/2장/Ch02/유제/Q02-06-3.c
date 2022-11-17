#include <stdio.h>
int main()
{
 	char protocol[50], delimiter[5], server[80];
 	printf("URL입력: ");
 	scanf("%[^:]%[:/]%[^\n]", protocol, delimiter, server);
 	printf("프로토콜 : %s\n서버 : %s\n", protocol, server);
 	fflush(stdin);
}
