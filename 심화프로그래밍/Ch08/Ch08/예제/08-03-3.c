#include <stdio.h> 
void sort(int[], int, int); //�迭�� �̸�, ����, ���Ĺ��
int main() { 
	int number[] = {5,34,56,-12,3,19}, loop; 
	printf("�����ϱ� ���� �迭 : "); 
	for(loop=0; loop < 6; loop++) 
		printf("%d ", number[loop]); 

	sort(number, sizeof(number)/sizeof(number[0]), 1);

	printf("\n������ ���� �迭 : "); 
	for(loop=0; loop < 6; loop++) 
		printf("%d ", number[loop]); 
	printf("\n"); 
}

void sort(int number[], int elements, int up_down) {
	int i, j, temp;
	switch(up_down) {
	case 0:	// �������� ���� 
		for (i=0; i < elements; i++) 
			for (j=0; j <= elements; j++) 
				if(number[i] < number[j]) {
					temp = number[i];
					number[i] = number[j];
					number[j] = temp;
				}
		break;
	default:	// �������� ���� 
		for (i=0; i < elements; i++) 
			for (j=0; j <= elements; j++) 
				if(number[i] > number[j]) {
					temp = number[i];
					number[i] = number[j];
					number[j] = temp;
				}
	}
}
