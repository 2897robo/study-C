#include <stdio.h>

int main()
{
	char start, end;

	end = 'A';
	while( end <= 'Z' ) { // Z에 도달할 때까지 루프를 반복한다. 
		start = 'A';	// 모든 줄의 처음은 A로 시작한다. 
		while(start <= end) { // 한 줄에 출력되는 문자들: A부터 지정된 문자까지. 
			printf("%c", start);
			start++;
		}
		end++;	// 한 줄에 출력될 마지막 문자를 하나 증가한다. 
		printf("\n");
	}
}
