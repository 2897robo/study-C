#include <stdio.h>
int main()
{
	printf("20194487 ����");
	int x, y, f, g;
	static short int circle[25][25];

	for(x=0; x<25; x++)		// y�� �׸��� 
		circle[x][12] = '|';
	circle[0][12] = 'Y';
	for(y=0; y<25; y++)		// x�� �׸��� 
		circle[12][y] = '-';
	circle[12][24] = 'X';
	for(x=-12 ; x<=12; x++) {
		for(y=-12; y<=12; y++) {
			f = x*x + y*y - 100;
			if( f >= -5 && f <= 5 )		// �ش�Ǵ� ��ġ�� ��*�����, ������ ��5 
 			    circle[x+12][y+12] = '*';
        }
	}

	circle[12][12] = '0';		// ���� ���
	for(x=-12; x<=12; x++) { 
		for(y=-12; y<=12; y++) 
			printf("%2c", circle[x+12][y+12]);
		printf("\n");
	}
}
