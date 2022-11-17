#include <stdio.h> 

main()
{ 
	int x, y, product=0, sign;

	printf("정수를 입력하시오(x,y) : ");
	scanf("%d%*c%d", &x, &y);
	printf("%d * %d", x, y);

	sign = ( (x ^ y) < 0 ) ? 1 : 0;	// 둘중 하나만 음수이면 부호를 음으로 
	x = ( x < 0 ) ? ~x+1 : x;	// x가 음수이면 양수로 변환 
	y = ( y < 0 ) ? -y : y;		// y가 음수이면 양수로 변환 

	while( y > 0) {
		if(y & 1 == 1)
			product += x;
		x <<= 1;
		y >>= 1;
	}

	if(sign)		// 결과의 부호가 음수이면 
		product = -product;		// 부호를 바꾼다. 
	printf(" = %d\n", product);
}

/*
#include <stdio.h>
#include <limits.h>

int main()
{
	int x, y, product=0, sign=1;

	printf("정수를 입력하시오(x,y) : ");
	scanf("%d%*c%d",&x, &y);
	printf("%d * %d", x, y);

	sign = (x & INT_MIN) ^ (y & INT_MIN);	// 결과 값의 부호(MSB) 검사 
	if( x & INT_MIN ) x = ~x + 1;		// x가 음수이면(MSB가 1이면) 2의 보수를 취한다. 
	if( y & INT_MIN ) y = ~y + 1;		// y가 음수이면(MSB가 1이면) 2의 보수를 취한다. 

	while ( y & INT_MAX ) {		// 곱을 계산한다. 
 		if(y & 1)
			product += x;
		x <<= 1;
		y >>= 1;
	}

	if(sign == INT_MIN)	// 결과 값의 부호가 음수이면 
		product = ~product + 1;		// 2의 보수를 취한다. 
	printf("= %d\n",product);
}



*/
