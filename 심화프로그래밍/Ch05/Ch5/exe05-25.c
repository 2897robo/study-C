#include <stdio.h>
int main()
{
	int x, y, sum=0;
	printf("두 수를 입력하시오 : ");
	scanf("%d%*c%d", &x, &y);

	if(x>y)	// 앞의 수가 크면 
		x = x + y - ( y = x );	// 두 수를 교환한다. 

	while(x <= y)	// 두 수 사이의 합을 구한다. 
		sum += x++;

	printf("sum = %d\n", sum);
}
