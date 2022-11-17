#include <stdio.h>
int main()
{
	float i=1.0, j=-1.75, *a;
	a = &i;		// 포인터 변경, 주소연산자 &
	printf("%p, %p, ", &i, a);	// %p:주소출력
	printf("%f\n", *a);	// *a는 a가 가리키는 곳의 데이터
	a = &j;		 // 포인터 변경, 주소연산자 &
	printf("%p, %p, ", &j, a); 	// %p:주소출력
	printf("%f\n", *a);
}
