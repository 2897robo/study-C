#include <stdio.h>

int main()
{
	int ant[1000] = {1, 0,}, ant2[1000]={0,};
	int cnt, index=0, i, a=0, b=0, element=0;

	for(element=0; element < 10; element++) {
		i=0;
		while(ant[i]!=0) {		// 개미수열 출력하는 부분 
			printf("%2d ", ant[i]);
			i++;
		}
		a=b=0;
		while(ant[a] != 0) {	// 현 상태로부터 다음 상태의 개미수열 생성 
			cnt = 0;			// ant2배열은 임시로 생성된 개미수열을 저장한다. 
			ant2[b]=ant[a];
			index = ant[a];
			while(index == ant[a]) { // 개미수열에서 연속되는 수를 세어 새로운 개미수열 생성 
				++cnt;
				++a;
			}
			ant2[++b] = cnt;
			++b;
		}
		for(i=0; i<=b; i++)	// 생성된 개미수열을 다시 현 상태로 복사하는 부분 
			ant[i] = ant2[i];
		printf("\n");
	}
}
