#include <stdio.h>
int main()
{
	char *str, *s;
	str = "C language Programming."; // �̿� ���� �� �� ����. strcpy�� ������� �ʴ´�.
	s = str;
	while(*s)
		printf("%s\n", s++);
	printf("%s ", str);
}
