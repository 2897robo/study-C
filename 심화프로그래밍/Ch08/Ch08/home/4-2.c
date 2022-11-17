#include <stdio.h>
int StrLen(char*);

int main() 
{ 
	printf("20194487 ±è±â¿í\n");
  	int len;
  	char Str[50] = "This is test.";
  	printf("%d\n", StrLen(Str));
}

int StrLen(char *s)
{ 
	int length=0;
	while(*s++)
		length++;
	return length; 
}
