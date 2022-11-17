#include <stdio.h> 

int main()
{
	int x, y, prime = 1 ; //prime은 소수 판별을 위한 변수, 1이면 소수이고, 0이면 소수가 아니다. 

	printf("숫자를 입력하여 주십시오 : ");
	scanf("%d", &y);

	for (x=2; x<=y/2; x++) {	// 2부터 x/2까지의 정수로 나누어서 
		if (y%x == 0) {  	// 떨어지면 소수가 아니다. 
			prime = 0;	// 그래서 prime을 0으로 하고 
			break;		// 빠져나간다.  
		}
	}

	if (prime == 1) 
		printf(" %d는 소수이다\n", y);
	else 
		printf(" %d는 소수가 아니다\n", y);
}
