#include <stdio.h>
int main()
{
	printf("20194487 김기욱");
	int Array[5], i;
	for (i=0; i<5; i++) {
		printf("%d번째 데이터 입력 : ", i);
		scanf("%d", &Array[i]); 
	}

	for (i=0; i<5; i++)
		printf("Array[%d] = %d\n", i, Array[i]);
}
