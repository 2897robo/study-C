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
			printf("Ȯ��Űcode=%d\n", chr);
		}
		else
			printf("�ƽ�Űcode=%d\n", chr);
		if(chr == 27)		// ESC Key
			break;
	}while(1);
}
