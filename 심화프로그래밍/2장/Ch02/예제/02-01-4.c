#include <stdio.h>
int main()
{
	const char x='a';
	printf("%c ", 'A');  //���� ��� 'A'
	printf("%c ", x);    //���� ��� x='a' ���
	printf("%c ", 74);   //���� ��� 'J' ���
	// ASCII �ڵ� 'J' = 74 = 0X4a = 0X4A = 0112
}
