#include <stdio.h>
void change_var();

int x;	// ���� ���� 

int main()
{
	printf("20194487 ����\n");
 	x = 10;	// ���� ���� ���
 	printf("x=%d\n", x);
 	change_var();
 	printf("x=%d\n", x);
}

void change_var()
{
	x = 20;	// ���� ���� ���
}
