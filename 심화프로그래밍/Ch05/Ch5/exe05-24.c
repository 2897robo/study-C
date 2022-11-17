#include <stdio.h>
#include <limits.h>

int main()
{
	int x, counter=0;
	unsigned int y;	// 양수로 설정한다. 그렇지 않으면 우측 Shift연산에서 문제가 발생한다. 
	printf("정수 입력 : ");
	scanf("%d", &x);

	y = INT_MIN;		// 10000000 00000000 00000000 00000000 = -2147483648 = 0x80000000 
	while( y != 0 ) {
		counter++;
		if(x & y)		// 각 자리를 비교하여 1이면 1을 출력하고 
			printf("1");
		else 		// 그렇지 않으면 0을 출력한다. 
			printf("0");
		y >>= 1;		// 오른쪽으로 한자리 씩 shift하여 1의 위치를 변경한다. 
		if(counter % 8 == 0)	// 숫자 8개가 출력되면 공백을 하나 출력한다. 
			printf(" ");
	}
	printf("\n");
}
