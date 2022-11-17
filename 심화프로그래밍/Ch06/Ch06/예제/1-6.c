#include <stdio.h> 
int main()
{
	printf("20194487 김기욱");
	int i, j, size, temp; 
	int stud[] = {45, 92, 88, 34, 88, 95, 82, 59, 20, 45, 60, 76}; // 배열 초기화

	//배열의 개수를 모를 때 개수를 알아내는 방법
	size = sizeof(stud)/sizeof(stud[0]);
	printf("Before sort : ");
	for(i=0; i<size; i++)
		printf("%d ", stud[i]);
	printf("\n");
	// 각 수를 반복 비교하여 크기순으로 정렬한다. 
	for (i=0; i<size-1; i++) {
		for (j=i+1; j<size; j++) { 
			if(stud[i] < stud[j]) {	// 배열을 비교하여 순서를 바꾼다.
				stud[i] ^= stud[j];
				stud[j] ^= stud[i];
				stud[i] ^= stud[j];
			}
		}
	}
	printf("Sorted : "); // 정렬된 결과 출력
	for (i=0; i<size; i++)
		printf("%d ", stud[i]); 
}
