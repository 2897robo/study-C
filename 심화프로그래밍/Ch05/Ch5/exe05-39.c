#include <stdio.h>

int main()
{
	int x;
	float pi=0.0f, sign = 1.0f;
	for(x=1; x<1000000; x+=2) {
		pi += sign*( 1.0f / (float)x );   /* ���� x�� �Ǽ��� �ٲ�*/ 
		sign = -sign;   /* ��ȣ �ٲٱ� */ 
	}
	printf(" pi = %.15f\n", pi*4);
}
