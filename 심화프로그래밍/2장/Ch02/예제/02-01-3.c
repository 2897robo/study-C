#include <stdio.h>
int main()
{
	const double pi=3.141592;	// 상수 이름 선언
	printf("%f ", 123.456);		// 실수 상수 출력
	printf("%f ", 12.E4);		// 실수 상수 출력
	printf("%f ", .0);		//소수점 앞의 0은 생략 가능 
	printf("%f ", 0.);		//소수점 뒤의 0은 생략 가능
	printf("%f ", .2345); 		//소수점 앞의 0은 생략 가능
	printf("%f\n", 0.23E-4);	// 실수 상수 출력
	printf("%f\n", pi);		// 선언된 상수 출력
}
