#include <stdio.h> 
#include <math.h>    //sqrt() 함수를 사용하기 위한 header file 

int main()
{
	int x, y, s, prime = 1, cnt=0;

	for (y=2; y<=100; y++) { // 2부터 100까지 루프를 돌고 
		prime = 1;
//		s = (int)sqrt(y);
		for (x=2; x<=y/2; x++) {  //x는 2부터 루트j까지 중에서 
			if (y%x == 0) {
			// y를 x로 나누어서 나머지가 0 이면 소수가 아니다. 
				prime = 0;
				break;
			}
		}
		if (prime == 1) {
			printf(" %d는 소수이다\n", y);
			cnt++;
		}
	}
	printf("count = %d\n", cnt);
}
