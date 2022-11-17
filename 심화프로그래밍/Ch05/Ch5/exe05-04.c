#include <stdio.h>

int main()
{
	int x=1, max=0, min=0X7FFFFFFF, count=0;
	printf("等檜攪 殮溘(部:擠熱)\n");
	while( 1 ) {
		scanf("%d", &x);
		if(x<0)
			break;
		count++;
		max = max < x ? x : max;
		min = min > x ? x : min;
	}
	printf("偎熱: %d\n", count);
	printf("譆渤高: %d, 譆歐高: %d\n", max, min);
}
