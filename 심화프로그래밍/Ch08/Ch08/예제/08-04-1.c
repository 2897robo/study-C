#include <stdio.h>
int StrLen(char[]);		// int StrLen(char *)

int main() 
{ 
  	int len;
  	char Str[50] = "This is test.";
  	printf("%d\n", StrLen(Str));
}

int StrLen(char *s)	//int StrLen(char s[])
{ 
	int length=0, i=0;
	while(*s++) {		// 널 문자를 만날 때까지 반복한다.
		length++;
		i++;
	}
	return length; 
} 
