#include <stdio.h>

int main()
{
	int n, r, x, y; 	// nCr = n!/ (r!*(n-r)!) 
	int numerator=1, denominator=1; // ����(numerator), �и�(denominator) 
	printf("�� ���� �Է��Ͻÿ� : ");
	scanf("%d%*c%d", &n, &r);

	x = n;
	while(x>r) {	// ���� : n*(n-1)*(n-2)*...*(n-r+1) 
		numerator *= x;
		x--;
	}

	y = 1;
	while( y <= n-r ) { // �и� : 1*2*...*(n-r) 
		denominator *= y;
		y++;
	}
	printf("%d/%d\n", numerator, denominator);
	printf("%dC%d = %d\n", n, r, numerator/denominator);
}
