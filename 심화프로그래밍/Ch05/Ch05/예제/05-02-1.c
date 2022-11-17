#include <stdio.h>
int main()
{
	int count =1;		// 초깃값 
	while(1) {		// 반복할 조건 검사, 여기서는 조건이 1이므로 무한 루프이다.
		printf("%d ", count);
		count++;		// 루프를 벗어날 조건을 변화시킴 
		if(count>10)	// 루프를 벗어나기 위한 검사
			break;
	}
}
