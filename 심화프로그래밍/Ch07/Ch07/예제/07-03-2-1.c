#include <stdio.h>
int main()
{
	char *str = "C language Programming.", *s;
	s=str; //str�� �׳� �ᵵ ������ �����Ͱ� ���ϸ� ó�� ��ġ�� �𸣰� �ȴ�.
	while(*s)
		printf("%s\n", s++);
	str = "This is test.";
	printf("%s ", str);
}
