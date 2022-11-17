#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void rtrim(char *, char *);
void ltrim(char *, char *);

int main() {
	printf("20194487 김기욱\n");
	char *str, *str2;
	str = (char *)malloc(100);	// 100바이트 메모리 할당
	str2 = (char *)malloc(100);	// 100바이트 메모리 할당
	strcpy(str, "  This is example  ");

	printf( "%s, %d\n", str, strlen(str));
	ltrim(str, " ");		// 문자열의 왼쪽에서 공백 삭제
	printf("%s<\n", str);
	rtrim(str, " ");		// 문자열의 오른쪽에서 공백 삭제
	printf("%s<\n", str);
 	free(str);
 	free(str2);
}

// 문자열의 오른쪽에서 지정된 문자를 만나면 잘라 버린다.
void rtrim( char * string, char * trim )
{
	int i;
	i = strlen(string) - 1;
	for( ; i >= 0 && strchr( trim, string[i] ) != NULL; i--)
		string[i] = '\0';		// 문자열의 끝에 NULL 삽입
}

// 문자열의 왼쪽에서 지정된 문자를 만나면 잘라 버린다.
void ltrim( char * string, char * trim )
{
	while ( string[0] != '\0' && strchr ( trim, string[0] ) != NULL )
		memmove( &string[0], &string[1], strlen(string) );
}
