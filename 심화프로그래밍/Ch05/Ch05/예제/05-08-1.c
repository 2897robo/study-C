#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	unsigned int i, seed;
	seed = time(0); 	// 난수 초기화 함수의 매개변수를 현재의 시간으로 설정
	srand(seed);	// 난수 초기화

	for( i=0; i<10; i++)
		printf("%d, ", rand());		// 난수발생
}
