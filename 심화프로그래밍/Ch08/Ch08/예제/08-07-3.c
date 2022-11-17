#include <stdio.h>
void sub(void)
{
	int count=1;	// 자동(auto local) 변수 
	static int s_count=1;
	// 지역변수로 선언된 정적(static local)변수
	printf("count=%d s_count=%d\n", count, s_count);
	count++;	// count 값은 함수가 끝나면 없어짐
	s_count++; // s_count값은 그대로 유지됨
} 

int main(void)
{
	int a;	// 지역(auto local) 변수
	for(a=1; a<=5; a++)
		sub();
}
