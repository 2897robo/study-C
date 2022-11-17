#include <stdio.h>

int main()
{
	int x;
	float pi=0.0f, sign = 1.0f;
	for(x=1; x<1000000; x+=2) {
		pi += sign*( 1.0f / (float)x );   /* 정수 x를 실수로 바꿈*/ 
		sign = -sign;   /* 부호 바꾸기 */ 
	}
	printf(" pi = %.15f\n", pi*4);
}
