#include <stdio.h>
int main()
{
	char *str = "C language Programming.", *s;
	s=str; //str�� �׳� �ᵵ ������ �����Ͱ� ���ϸ� ó�� ��ġ�� �𸣰� �ȴ�.
	while(*s)
		printf("%s\n", s++);
}
// str[]="C language Programming."�� *str="C language Programming."
// �ʹ� �ٸ���. str[]�� ������ ����� �ǰ�, *str�� ������ ������ �ȴ�.
