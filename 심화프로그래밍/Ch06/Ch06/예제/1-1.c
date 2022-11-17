#include <stdio.h>
int main()
{
	printf("20194487 김기욱");

	int Array[5] = {5, 3, 4, 9, 1}, i;
	for (i=0; i<5; i++)	// 배열은 0번부터 저장된다.
		printf("Array[%d] = %d\n", i, Array[i]);	// 배열에 저장된 값 출력
}
