#include <stdio.h>
int main()
{
 	int Num, Sum, i, j;
 	for(i=1; i<=1000; i++) {
		Sum = 0;
		for(j=1; j<=i/2; j++) {
			if(i%j == 0)
				Sum += j;
		}
		if( i == Sum)
			printf("%d ", i);
	}
}

/*
#include <stdio.h> 

int main()
{
	int x, y, sum; 

	for (x=2; x <= 1000; x++) { 
		sum= 0;                            // sum을 초기화한다. 
		for (y=1; y <= x/2; y++) {
		// x의 가장 큰 약수(x/2)까지 루프를 돌면서 x의 약수를 구한다. 
			if (x%y == 0) sum += y;
				// x를 y로 나누어서 나머지가 0인 값(약수)의 
				// 합을 구한다. 
		} 
		if (x == sum) {	// 완전수이면 결과를 출력한다. 
			printf("%d의 약수는\n",x); 
			for (y=1; y <= x/2; y++) 
				if (x % y ==0)
					printf("%d ", y);
			if (x == sum) printf("\n%d은(는) 완전수이다.\n\n", x); 
		}
	}
}
*/
