#include <stdio.h>
void print_var();

int main()
{
 	x = 10; // ������ �� �� ���� �߻�, ������ ���ʿ� ����
 	printf("x=%d\n", x);
 	print_var();
 	printf("x=%d\n", x);
}

int x;	// ���� ����, ����� ���� ���� ��밡��

void print_var()
{
	x = 20; // ���� ���� ���
}
