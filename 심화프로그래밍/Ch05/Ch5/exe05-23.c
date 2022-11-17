#include <stdio.h>

int main()
{
	int x, prime=1, divider = 2; // prime이 1이면 소수, 0이면 소수 아님. 
	// divider는 2부터 1씩 증가시키며 입력된 수가 나누어지는지 검사하기 위한 변수 
	printf("소수를 구할 수를 입력하시오 : ");
	scanf("%d", &x);

	while(x/2 > divider) { // x의 1/2까지 검사. 
		if( x % divider == 0) {  // 어떤 수로 나누어지면 
			prime = 0;	// 소수가 아님 
			break;		// 루프를 끝냄 
		}
		divider++;	// 그렇지 않으면 나누는 수를 1 증가 
		// 끝까지 반복했을 때도 나누어지는 수가 없으면 prime는 1로 유지 
	}
	if(prime)
		printf("%d is Prime number!\n", x);
	else 
		printf("%d is Not prime number.\n", x);
}
