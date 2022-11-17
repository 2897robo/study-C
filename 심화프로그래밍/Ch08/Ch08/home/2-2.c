#include <stdio.h> 
void swap(int *, int *);    // 함수의 원형 

int main() 
{ 
	printf("20194487 김기욱\n");
	int x = 15, y = 37; 
	printf("함수 실행 전 값 x = %d, y = %d\n", x, y); 
	swap(&x, &y); 		// 변수가 가지고 있는 값의 주소만 넘겨준다. 
	printf("함수 실행 후 값 x = %d, y = %d\n", x, y);
} 

void swap(int *a, int *b) 
{ 
	printf("함수 내 실행 전 값 a = %d, b = %d\n", *a, *b); 
	*a ^= *b, *b ^= *a, *a ^= *b; 
	printf("함수 내 실행 후 값 a = %d, b = %d\n", *a, *b); 
}
