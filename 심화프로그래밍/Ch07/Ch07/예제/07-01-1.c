#include <stdio.h>
int main() 
{
	int i=10, j=20, *a;
	a = &i;		// 포인터 변경, 주소연산자 &
	printf("i의 주소:%p, a의 값:%p, ", &i, a);	// %p:주소출력
	printf("*a가 가리키는 곳의 값:%d\n", *a);	// *a는 a가 가리키는 곳의 데이터
	a = &j;		 // 포인터 변경, 주소연산자 &
	printf("j의 주소:%p, a의 값:%p, ", &j, a); 	// %p:주소출력
	printf("*a가 가리키는 곳의 값:%d\n", *a);	// *a는 a가 가리키는 곳의 데이터
}
