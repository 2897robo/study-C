#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int x, y, sum[70]={0, }, i;
	int x_len, y_len, xOk = 1, yOk = 1;
	static char cx[71], cy[71], sx[71], sy[71], t[10];

	printf("ū ���� 2���� �Է��Ͻÿ� : \n");
	scanf("%[0123456789]%[^0123456789]%[0123456789]", sx, t, sy);

	memset(cx, ' ', 70);		// cx ���ڿ��� ��ü�� �� ��(space)���� ä���. 
	cx[70] = '\0';			// cx ���ڿ��� ������ ���ڸ� NULL�� ���� 
	strcpy(cy, cx);			// cx�� cy�� �����Ѵ�. 

	x_len = strlen(sx);		// �Էµ� ���ڿ��� ���̸� ���Ѵ�. 
	y_len = strlen(sy);

	memmove(cx+(70-x_len), sx, x_len); // sx���ڿ��� cx ���ڿ��� ������ ���� 
	memmove(cy+(70-y_len), sy, y_len); // sy���ڿ��� cy ���ڿ��� ������ ���� 

	for(i=69; xOk || yOk; i--) {  	// cx�� cy �� �� �ϳ��� �����̸� ����Ͽ� sum�� �����Ѵ�. 
		xOk = isdigit(cx[i]);		// space�� �� �����Ƿ� ���� ���� �˻��Ѵ�. 
		yOk = isdigit(cy[i]);
		x = xOk ? cx[i] - '0' : 0;	// ���ڷ� �� �����̸� ������ �ٲٰ� �ƴϸ� 0�� �ִ´�. 
		y = yOk ? cy[i] - '0' : 0;
		sum[i] += x + y;			// ���ڸ� ���� 
		sum[i-1] = sum[i]/10;		// ĳ�� ��� 
		sum[i] %= 10;				// sum ��� 
	}

	printf("   %s\n", cx);		// cx�� ��� 
	printf(" + %s\n", cy);		// cy�� ��� 

	printf(" = ");
	for(i=0; sum[i] == 0; i++)		// ��� �� sum ��� 
		printf(" ");         		// 0�� ��� ���� ��� 
	for(; i< 70; i++)         		// ��(69)���� ��� 
		printf("%d", sum[i]);

	printf("\n");
	getch();
}
