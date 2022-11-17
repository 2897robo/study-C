#include <stdio.h>
//20개의 데이터를 입력받아 합과 평균을 계산하는 프로그램을 while을 이용하여 작성하라.
int main()
{
	int cnt=0, sum=0, data;

	while(cnt<20) {
		printf("%d: ", cnt+1);
		scanf("%d", &data);
		sum += data;
		cnt++;
	}
	printf("sum = %d, average = %f\n", sum, sum/20.);
}
