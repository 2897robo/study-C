#include <stdio.h>
int main()
{
	int a, b, x;
	for (a=12; a<1000000; a+=3) { // 12부터 백만까지 찾기
		// 3으로 나누어지기 위해서는 3의 배수이어야 하므로 12부터 시작한다.
		b = a;
		x = 1;
		while(b/10) {	// 맨 앞자리를 찾기 위한 루프 
			b /= 10;  // 한자리씩 맨 왼쪽으로 이동:10진
			x *= 10;  // 맨 앞자리의 단위를 계산하기 위함
		}
		if( (a - b*x) * 10 + b == (a/3)*2 ) {
		// 맨 앞자리를 맨 뒤로 보냈을 때 원래 수의 2/3인가? 
			printf("%d * 2 / 3 = %d\n", a, (a - b*x) * 10 + b);
			break;
		}
	}
}
