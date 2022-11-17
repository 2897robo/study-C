#include <stdio.h>

int isperfect_no(int);		// 함수 원형

int main()
{
	int i;		 // 함수의 지역변수
	for (i=2; i <= 1000; i++) { 
		if(isperfect_no(i))		// 함수 호출
			printf("%d은(는) 완전수이다.\n\n", i);
	}
}

int isperfect_no(int x)
{
	int sum=0, j;	// 함수의 지역변수
	for (j=1; j <= x/2; j++)	// x의 약수의 합을 구한다. 
		if (x%j == 0) sum += j;
	return ((x == sum) ? 1 : 0);	// 결과 반환
}
