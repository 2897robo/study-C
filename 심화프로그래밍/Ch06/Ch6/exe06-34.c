#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	int x, y, cnt=0, i=0;
	static char cx[71], cy[71], t[10];

	printf("첫 번째 문자열 입력 : ");
	gets(cx);
	printf("두 번째 문자열 입력 : ");
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

	printf(": 같은 위치에 같은 문자는 %d개이다.\n", cnt); 
	getch();
}
