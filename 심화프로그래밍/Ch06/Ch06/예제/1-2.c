#include <stdio.h>
int main()
{
	printf("20194487 ����");
	int Array[5], i;
	for (i=0; i<5; i++) {
		printf("%d��° ������ �Է� : ", i);
		scanf("%d", &Array[i]); 
	}

	for (i=0; i<5; i++)
		printf("Array[%d] = %d\n", i, Array[i]);
}
