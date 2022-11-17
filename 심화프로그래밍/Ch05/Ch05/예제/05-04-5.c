#include <stdio.h>
#include <conio.h>
int main(void)
{
	int chr;
	do
	{
		chr = getch();
		printf("%d ", chr); 
		if(chr==0 || chr==0xe0)
		{
			chr=getch();
			printf("확장키code=%d\n", chr);
		}
		else
			printf("아스키code=%d\n", chr);
		if(chr == 27)		// ESC Key
			break;
	}while(1);
}
