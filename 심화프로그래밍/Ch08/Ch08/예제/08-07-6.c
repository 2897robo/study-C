#include <stdio.h>
void change_var();

int main()
{
 	extern int x;
	// ���� ������ �Ʒ���, �Ǵ� �ٸ� ���Ͽ� ����Ǿ��� ��, �����ϴ� ��
 	x = 30;
 	printf("x=%d\n", x);
 	change_var();
 	printf("x=%d\n", x);
}

int x;	// ���� ���� 

void change_var()
{
	x = 20;
}
