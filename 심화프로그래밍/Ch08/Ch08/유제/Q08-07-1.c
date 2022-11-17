#include <stdio.h>

void print_series(int);	// 함수원형 

int main()
{
	int x;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	print_series(x); 
}

void print_series(int x) {
	static int cnt;	// 초깃값을 지정하지 않아도 0으로 초기화 된다. 
	int t=0;	// 자동변수는 초깃값을 지정해 주어야 값이 지정된다. 
	cnt++, t++;
	printf("%d회 호출, t=%d\n", cnt, t); //cnt와 t를 비교해 보라. 
	if(x==0)
		return;
	print_series(x-1);
	printf("%d ", x);
}
