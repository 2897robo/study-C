#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void rtrim(char *, char *);
void ltrim(char *, char *);

int main() {
	printf("20194487 ����\n");
	char *str, *str2;
	str = (char *)malloc(100);	// 100����Ʈ �޸� �Ҵ�
	str2 = (char *)malloc(100);	// 100����Ʈ �޸� �Ҵ�
	strcpy(str, "  This is example  ");

	printf( "%s, %d\n", str, strlen(str));
	ltrim(str, " ");		// ���ڿ��� ���ʿ��� ���� ����
	printf("%s<\n", str);
	rtrim(str, " ");		// ���ڿ��� �����ʿ��� ���� ����
	printf("%s<\n", str);
 	free(str);
 	free(str2);
}

// ���ڿ��� �����ʿ��� ������ ���ڸ� ������ �߶� ������.
void rtrim( char * string, char * trim )
{
	int i;
	i = strlen(string) - 1;
	for( ; i >= 0 && strchr( trim, string[i] ) != NULL; i--)
		string[i] = '\0';		// ���ڿ��� ���� NULL ����
}

// ���ڿ��� ���ʿ��� ������ ���ڸ� ������ �߶� ������.
void ltrim( char * string, char * trim )
{
	while ( string[0] != '\0' && strchr ( trim, string[0] ) != NULL )
		memmove( &string[0], &string[1], strlen(string) );
}
