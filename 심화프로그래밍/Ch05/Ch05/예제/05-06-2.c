#include <stdio.h>
int main()
{
	int x, sum=0, count=0;
	double ave;
	for(;;) {
		printf("양의 정수를 입력하시오(음수 : 끝) : ");
		scanf("%d", &x);
		if( x < 0 ) // 음수이면 루프를 빠져나감. 
			break;
		else if( x > 100 )
			// 100 이상이면 계산하지 않고 for로 가서 다음 루프 실행 
			continue;
		sum += x;
		count++;
	}
	ave= (double) sum/ (double) count;
	printf(" 합계 : %d, 평균 : %f, 개수 : %d\n", sum, ave, count);
}
