#include <stdio.h>

int main()
{
	int x;
	for(x=51; x<100; x++) // 50보다 크므로 51부터 시작한다. 
		if(x%3==1 && x%5==4 && x%2==0 && (x/10 + x%10)%2 == 0 ) // 나머지 4가지 조건을 모두 검사한다. 
			printf("%d\n", x);
}
