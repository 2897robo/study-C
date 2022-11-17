#include <stdio.h>

int main()
{
	int x, y, k=2, ex;
	printf("두 양의 정수를 입력하시오: ");
	scanf("%d%*c%d", &x, &y); 

	while(1) {
		if( (x % k == 0) && (y % k == 0) ) {
			ex = 1;
			break;
		}
		else if( k > x || k > y) {
			ex = 0;
			break;
		}
		k++;
	}
	if( ex )
		printf("서로 소가 아니다.\n");	
	else 
		printf("서로 소이다.\n");
}
