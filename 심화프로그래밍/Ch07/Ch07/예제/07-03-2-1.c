#include <stdio.h>
int main()
{
	char *str = "C language Programming.", *s;
	s=str; //str을 그냥 써도 되지만 포인터가 변하면 처음 위치를 모르게 된다.
	while(*s)
		printf("%s\n", s++);
	str = "This is test.";
	printf("%s ", str);
}
