#include <stdio.h>

int main()
{
	int x=1, max=0, min=0X7FFFFFFF, count=0;
	printf("������ �Է�(��:����)\n");
	while( 1 ) {
		scanf("%d", &x);
		if(x<0)
			break;
		count++;
		max = max < x ? x : max;
		min = min > x ? x : min;
	}
	printf("����: %d\n", count);
	printf("�ִ�: %d, �ּڰ�: %d\n", max, min);
}
