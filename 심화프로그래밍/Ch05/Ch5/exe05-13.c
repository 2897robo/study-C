#include <stdio.h>

int main()
{
	int a, b, x, y;

	printf("input x, y : ");
	scanf("%d%*c%d", &a, &b);
	x = a;
	y = b;
	for (;;) {		// �����ݷ� �� ���� ���� ������ �ȴ�. 
		if(x == y )	// x�� y�� ������ ������. 
			break;
		x>y ? (x -=y) : (y -= x);	// ū ������ ���� ���� ����. 
	}
	printf("%d�� %d�� �ִ� �������? = %d\n", a, b, x);
}

/*
#include <stdio.h>

int main()
{
	int a, b, x, y;

	printf("input x, y : ");
	scanf("%d%*c%d", &a, &b);
	x = a; 
	y = b; 
	for (;;) {		//�����ݷ� �ΰ��� ���� ������ �ȴ�. 
		if (x > y)	// x�� ũ�� x���� y�� ����. 
			x -= y;
		else if(x < y )	// y�� ũ�� y���� x�� ����. 
			y -= x;
		else 			// x�� y�� ������ ������. 
			break; 
	}
	printf("%d�� %d�� �ִ� �������? = %d\n", a, b, x);
} 
*/

/*
#include <stdio.h>

int main()
{
	int a, b, x, y, z;

	printf("input a, b : ");
	scanf("%d%*c%d", &a, &b);		// a, b�� ��� 0�� �ƴ� ���̾�� �Ѵ�. 
	x = a;
	y = b;

	while (y != 0) {	// x�� y�� �������� �� ���� �ݺ� 
		z=x%y;
		x=y;
		y=z;
	}
	printf("%d�� %d�� �ִ� ����� = %d\n", a, b, x);
} 
*/

/*
#include <stdio.h>

int main()
{
	int a, b, x, y;

	printf("input a, b : ");
	scanf("%d%*c%d", &a, &b);
	x = a;
	y = b;

	while(1) {	// x�� y�� ������ �� ���� �ݺ� 
		if(x == y )
			break;
		x>y ? (x -=y) : (y -= x);	// x>y ? (x = x - y) : (y = y - x);�� ����� 
	}
	printf("%d�� %d�� �ִ� ����� = %d\n", a, b, x);
} 
*/

/*
#include <stdio.h>

int main()
{
	int a, b, x, y;

	printf("input a, b : ");
	scanf("%d%*c%d", &a, &b);
	x = a;
	y = b;
	while(x!=y)	// x�� y�� ������ �� ���� �ݺ� 
		x>y ? (x -=y) : (y -= x);	// x>y ? (x = x - y) : (y = y - x);�� ����� 
	printf("%d�� %d�� �ִ� ����� = %d\n", a, b, x);
}
*/

/*
#include <stdio.h>

int main()
{
	int a, b, x, y;

	printf("input a, b : ");
	scanf("%d%*c%d", &a, &b);
	x = a; 		// a�� b�� ������ �α� ���ؼ� x�� y�� �����
	y = b;

	while (1) {	// ���ѷ��� 
		if (x < y)
			y-=x;	// y = y - x;�� ����� 
		else if (x > y)
			x-=y;	// x = x - y;�� ����� 
		else 	// x�� y�� �������� ���� 
			break;
	} 
	printf( "%d�� %d�� �ִ� ����� = %d\n", a, b, x);
}
*/

/*
#include <stdio.h>

int main()
{
	int a, b, x, y;

	printf("input a, b : ");
	scanf("%d%*c%d", &a, &b);		// a, b�� ��� 0�� �ƴ� ���� �����̾�� �Ѵ�. 
	x = a; 		// a�� b�� ������ �α� ���ؼ� x�� y�� ����� 
	y = b;
	while (x != y) {	// x�� y�� ������ �� ���� �ݺ� 
		if (x < y)
			y-=x;	// y = y - x;�� ����� 
		else 
			x-=y;	// x = x - y;�� ����� 
	} 
	printf( "%d�� %d�� �ִ� ����� = %d\n", a, b, x);
}
*/

/*
#include <stdio.h>
#include <math.h>
// macro�� ���� �ٿ� ���ļ� �� ���� �� �ڿ� \�� �Ѵ�. 
#define SWAP(x, y)  x ^= y;\
					y ^= x;\
					x ^= y;
int main()
{
	int x = 252, y = 105;
	printf("%d, %d\n", x, y);
	while(1) {
		if(x<y){			// {}�� �־�� �ϴ� ������? 
			SWAP(x,y)		// �����ݷ��� ����?
		}
		x %= y;
		if(!x)		// ���� �ǹ��ϱ�? 
			break;
	}
	printf("�ִ�����: %d\n", y);
}
*/
