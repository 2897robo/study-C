#include <stdio.h>

int main()
{
	int n, r, x, y; 	// nCr = n!/ (r!*(n-r)!) 
	int numerator=1, denominator=1; // 분자(numerator), 분모(denominator) 
	printf("두 수를 입력하시오 : ");
	scanf("%d%*c%d", &n, &r);

	x = n;
	while(x>r) {	// 분자 : n*(n-1)*(n-2)*...*(n-r+1) 
		numerator *= x;
		x--;
	}

	y = 1;
	while( y <= n-r ) { // 분모 : 1*2*...*(n-r) 
		denominator *= y;
		y++;
	}
	printf("%d/%d\n", numerator, denominator);
	printf("%dC%d = %d\n", n, r, numerator/denominator);
}
