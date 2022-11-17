#include <stdio.h>

int main()
{
	int a, b, x, y;

	printf("input x, y : ");
	scanf("%d%*c%d", &a, &b);
	x = a;
	y = b;
	for (;;) {		// 세미콜론 두 개면 무한 루프가 된다. 
		if(x == y )	// x와 y가 같으면 끝낸다. 
			break;
		x>y ? (x -=y) : (y -= x);	// 큰 값에서 작은 값을 뺀다. 
	}
	printf("%d와 %d의 최대 공약수는? = %d\n", a, b, x);
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
	for (;;) {		//세미콜론 두개면 무한 루프가 된다. 
		if (x > y)	// x가 크면 x에서 y를 뺀다. 
			x -= y;
		else if(x < y )	// y가 크면 y에서 x를 뺀다. 
			y -= x;
		else 			// x와 y가 같으면 끝낸다. 
			break; 
	}
	printf("%d와 %d의 최대 공약수는? = %d\n", a, b, x);
} 
*/

/*
#include <stdio.h>

int main()
{
	int a, b, x, y, z;

	printf("input a, b : ");
	scanf("%d%*c%d", &a, &b);		// a, b는 모두 0이 아닌 값이어야 한다. 
	x = a;
	y = b;

	while (y != 0) {	// x가 y로 나누어질 때 까지 반복 
		z=x%y;
		x=y;
		y=z;
	}
	printf("%d와 %d의 최대 공약수 = %d\n", a, b, x);
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

	while(1) {	// x와 y가 같아질 때 까지 반복 
		if(x == y )
			break;
		x>y ? (x -=y) : (y -= x);	// x>y ? (x = x - y) : (y = y - x);의 축약형 
	}
	printf("%d와 %d의 최대 공약수 = %d\n", a, b, x);
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
	while(x!=y)	// x와 y가 같아질 때 까지 반복 
		x>y ? (x -=y) : (y -= x);	// x>y ? (x = x - y) : (y = y - x);의 축약형 
	printf("%d와 %d의 최대 공약수 = %d\n", a, b, x);
}
*/

/*
#include <stdio.h>

int main()
{
	int a, b, x, y;

	printf("input a, b : ");
	scanf("%d%*c%d", &a, &b);
	x = a; 		// a와 b를 보관해 두기 위해서 x와 y를 사용함
	y = b;

	while (1) {	// 무한루프 
		if (x < y)
			y-=x;	// y = y - x;의 축약형 
		else if (x > y)
			x-=y;	// x = x - y;의 축약형 
		else 	// x와 y가 같아지면 끝냄 
			break;
	} 
	printf( "%d와 %d의 최대 공약수 = %d\n", a, b, x);
}
*/

/*
#include <stdio.h>

int main()
{
	int a, b, x, y;

	printf("input a, b : ");
	scanf("%d%*c%d", &a, &b);		// a, b는 모두 0이 아닌 양의 정수이어야 한다. 
	x = a; 		// a와 b를 보관해 두기 위해서 x와 y를 사용함 
	y = b;
	while (x != y) {	// x와 y가 같아질 때 까지 반복 
		if (x < y)
			y-=x;	// y = y - x;의 축약형 
		else 
			x-=y;	// x = x - y;의 축약형 
	} 
	printf( "%d와 %d의 최대 공약수 = %d\n", a, b, x);
}
*/

/*
#include <stdio.h>
#include <math.h>
// macro를 여러 줄에 걸쳐서 쓸 때는 줄 뒤에 \를 한다. 
#define SWAP(x, y)  x ^= y;\
					y ^= x;\
					x ^= y;
int main()
{
	int x = 252, y = 105;
	printf("%d, %d\n", x, y);
	while(1) {
		if(x<y){			// {}가 있어야 하는 이유는? 
			SWAP(x,y)		// 세미콜론이 없다?
		}
		x %= y;
		if(!x)		// 무슨 의미일까? 
			break;
	}
	printf("최대공약수: %d\n", y);
}
*/
