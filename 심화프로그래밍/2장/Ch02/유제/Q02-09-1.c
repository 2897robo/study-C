#include <stdio.h>
#include <conio.h>
int main()
{
	char character;
	printf("���ڸ� �Է��Ͻÿ� : ");
	character = getch();
	printf("\n");

	printf("�Է� ���� = ");
	putch(character);
	putch('\n');
	printf("���� ���� = ");
	putch(character-1);
	putch('\n');
	printf("���� ���� = ");
	putch(character+1);
	putch('\n');
}
