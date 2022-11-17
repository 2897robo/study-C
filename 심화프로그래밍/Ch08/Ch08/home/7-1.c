#include <stdio.h>
int main(void)
{
	printf("20194487 김기욱\n");
	auto int a=5, b=10;	// 함수 내에서의 지역변수 선언 
	{ // 블록 시작
		int hap;	// 블록 내에서의 지역변수 hap 선언 
		hap = a + b;
		printf("%3d\n", hap);
	} // 블록 끝
	printf("a=%d, b=%d\n", a, b);
	printf("hap=%d\n", hap);
	// 블록 밖에서는 hap변수를 사용할 수 없음:컴파일 시 error 발생
} // 자동 변수는 그 변수가 속한 블록이나 함수를 벗어나면 사라짐
