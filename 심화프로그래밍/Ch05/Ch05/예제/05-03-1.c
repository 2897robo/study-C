#include <stdio.h>
#include <conio.h>
int main()
{
	int dan, y;
	dan = 2;		// 2�ܺ��� �����Ѵ�.
	while( dan < 10) {	// 9�ܱ���
		printf("%8d��\n", dan);
		y = 1;		// �� �ܿ� �������� ���� 1���� �����Ѵ�.
		while(y < 10) { // �� �ܿ� �������� ���� 9����
			printf(" %2d * %2d = %2d\n", dan, y, dan*y); // ȭ�鿡 ���
			y++;	// �������� �� ����
		}
		printf("\n\n");
		getch(); 
		dan++;		// �� ����
	}
}
