#include <stdio.h>
double CircleArea(double, double);

int main()
{
	printf("20194487 김기욱\n");
 	double base=15.4, height=20.8;	// main함수의 지역변수
	printf("삼각형의 면적 = %f\n", CircleArea(base, height));	// 함수 호출
}

double CircleArea(double b, double h)
{	// 지역변수가 선언되지 않았다.
	return ( b * h / 2.0 );	// 결과 값 반환
}
