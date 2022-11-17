#include <stdio.h>

typedef union int_or_float { 
	int i; 
	float f; 
} number;

int main()
{
	number n; 
	n.i = 1234; 	// 정수 값 대입 
	printf("i:%10d,  f:%16.10e\n", n.i, n.f);	// 정수 형만 정확한 값을 보여준다. 
	n.f = 1234.0f; 	// 실수 값 대입 
	printf("i:%10d,  f:%16.10e\n", n.i, n.f);	// 실수 형만 정확한 값을 보여준다. 
}
