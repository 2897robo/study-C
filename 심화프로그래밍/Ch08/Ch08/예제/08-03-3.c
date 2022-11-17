#include <stdio.h> 
void sort(int[], int, int); //배열의 이름, 개수, 정렬방법
int main() { 
	int number[] = {5,34,56,-12,3,19}, loop; 
	printf("소팅하기 전의 배열 : "); 
	for(loop=0; loop < 6; loop++) 
		printf("%d ", number[loop]); 

	sort(number, sizeof(number)/sizeof(number[0]), 1);

	printf("\n소팅한 후의 배열 : "); 
	for(loop=0; loop < 6; loop++) 
		printf("%d ", number[loop]); 
	printf("\n"); 
}

void sort(int number[], int elements, int up_down) {
	int i, j, temp;
	switch(up_down) {
	case 0:	// 오름차순 정렬 
		for (i=0; i < elements; i++) 
			for (j=0; j <= elements; j++) 
				if(number[i] < number[j]) {
					temp = number[i];
					number[i] = number[j];
					number[j] = temp;
				}
		break;
	default:	// 내림차순 정렬 
		for (i=0; i < elements; i++) 
			for (j=0; j <= elements; j++) 
				if(number[i] > number[j]) {
					temp = number[i];
					number[i] = number[j];
					number[j] = temp;
				}
	}
}
