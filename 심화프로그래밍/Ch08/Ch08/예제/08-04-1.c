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
	while(*s++) {		// �� ���ڸ� ���� ������ �ݺ��Ѵ�.
		length++;
		i++;
	}
	return length; 
} 
