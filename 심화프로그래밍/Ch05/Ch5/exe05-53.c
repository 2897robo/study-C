#include <stdio.h>

int main()
{
	int number, divider, count, sum;

	printf("프로그래밍은 상상이다.\n");

	for(number=1; number<=100; number++) {
		count = sum = 0;
		printf("%3d의 약수 : ", number);
		for(divider=1; divider<=number/2; divider++) {
			if(number % divider == 0) {
				printf("%3d, ", divider);
				count++;
				sum += divider;	// 약수의 합을 sum에 누적 
			}
		}
		count++;
		printf("%3d ", number);
		if(count == 2)			// 약수의 개수가 2개이면 소수 
			printf("소수");
		else if(count % 2)			// 약수의 개수가 홀수 개이면 제곱수 
			printf("제곱수");
		if(sum == number)			// 자신을 제외한 모든 약수의 합이 자신과 같으면 완전수 
			printf("완전수");
		printf("\n");
	}
}
