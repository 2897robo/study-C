#include <stdio.h> 

main()
{ 
	int x, y, product=0, sign;

	printf("������ �Է��Ͻÿ�(x,y) : ");
	scanf("%d%*c%d", &x, &y);
	printf("%d * %d", x, y);

	sign = ( (x ^ y) < 0 ) ? 1 : 0;	// ���� �ϳ��� �����̸� ��ȣ�� ������ 
	x = ( x < 0 ) ? ~x+1 : x;	// x�� �����̸� ����� ��ȯ 
	y = ( y < 0 ) ? -y : y;		// y�� �����̸� ����� ��ȯ 

	while( y > 0) {
		if(y & 1 == 1)
			product += x;
		x <<= 1;
		y >>= 1;
	}

	if(sign)		// ����� ��ȣ�� �����̸� 
		product = -product;		// ��ȣ�� �ٲ۴�. 
	printf(" = %d\n", product);
}

/*
#include <stdio.h>
#include <limits.h>

int main()
{
	int x, y, product=0, sign=1;

	printf("������ �Է��Ͻÿ�(x,y) : ");
	scanf("%d%*c%d",&x, &y);
	printf("%d * %d", x, y);

	sign = (x & INT_MIN) ^ (y & INT_MIN);	// ��� ���� ��ȣ(MSB) �˻� 
	if( x & INT_MIN ) x = ~x + 1;		// x�� �����̸�(MSB�� 1�̸�) 2�� ������ ���Ѵ�. 
	if( y & INT_MIN ) y = ~y + 1;		// y�� �����̸�(MSB�� 1�̸�) 2�� ������ ���Ѵ�. 

	while ( y & INT_MAX ) {		// ���� ����Ѵ�. 
 		if(y & 1)
			product += x;
		x <<= 1;
		y >>= 1;
	}

	if(sign == INT_MIN)	// ��� ���� ��ȣ�� �����̸� 
		product = ~product + 1;		// 2�� ������ ���Ѵ�. 
	printf("= %d\n",product);
}



*/
