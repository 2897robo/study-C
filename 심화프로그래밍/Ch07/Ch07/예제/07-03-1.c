#include <stdio.h>
int main()
{
 	char x[]="string", y[]="test", *b;
	b = x;		 // ������ ����, ���ڿ��� �̸� ����
	printf("%p, %p, ", &x, b);
	printf("%s\n", b);
	b = y;		 // ������ ����, �ּҿ�����(&) ��� ����.
	printf("%p, %p, ", &y, b);
	printf("%s\n", b);
}
