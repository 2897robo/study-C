#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	int x, y, cnt=0, i=0;
	static char cx[71], cy[71], t[10];

	printf("ù ��° ���ڿ� �Է� : ");
	gets(cx);
	printf("�� ��° ���ڿ� �Է� : ");
	gets(cy);
	
	while( cx[i] && cy[i]) {
		if( !(cx[i] ^ cy[i]) ) {
			cnt++;
			putch(cx[i]);
		}
		else 
			putch('*');
		i++;
	}

	printf(": ���� ��ġ�� ���� ���ڴ� %d���̴�.\n", cnt); 
	getch();
}
