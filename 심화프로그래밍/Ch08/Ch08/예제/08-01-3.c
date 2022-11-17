#include <stdio.h> 
int gcd(int, int);  // 함수 원형(prototype) 

int main()
{
	int i, j; 
	printf("최대공약수를 구할 두 수를 입력하시오. "); 
	scanf("%d%*c%d", &i, &j); 
	printf("두 수의 최대 공약수는 %d이다.\n", gcd(i, j)); 
	printf("48과 56의 최대 공약수는 %d이다.\n", gcd(48, 56)); 
}

int gcd(int a, int b)
{ 
	int z=1;
	while(z != 0) { // 나머지를 이용한 유클리드 호제법 
		z = a % b;
		a = b;
		b = z;
	}
	return a;
}
