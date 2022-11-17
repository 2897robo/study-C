#include <stdio.h>
int main()
{
	printf("20194487 김기욱\n");

	int count=1;		// 초깃값 
	for(;;) {
		printf("%d ", count);
		count++;		// 루프를 벗어날 조건을 변화시킴 
		if(count>10)	// 루프를 벗어나기 위한 검사
			break;
	}
}
