#include <stdio.h>
#include <math.h>    //sqrt() 함수를 사용하기 위한 헤더파일 

int main()
{
	int x, y, s, prime = 1 ; 

	printf("숫자를 입력하여 주십시오 : "); 
	scanf("%d", &y); 
	s = (int)sqrt(y);

	for (x=2; x<=s; x++) {  // i는 2부터 루트y까지 
		if (y%x == 0) { 
			prime = 0; 
			break; 
		} 
	} 
	if (prime == 1) 
		printf(" %d는 소수이다\n", y); 
	else 
		printf(" %d는 소수가 아니다\n", y); 
} 
