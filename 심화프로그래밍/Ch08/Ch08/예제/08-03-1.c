#include <stdio.h>
int findMaxNum(int[], int); 

int main() 
{ 
	int num1[] = {5, 34, 56, -12, 3, 19}; 
	int num2[] = {1, -2, 34, 207, 93, -12}; 

    printf("numb1[]�� �ִ��� %d�̴�.\n", findMaxNum(num1, 6)); 
    printf("numb2[]�� �ִ��� %d�̴�.\n", findMaxNum(num2, 6)); 
}

int findMaxNum(int number[], int elements) 
{ 
	int largest_value, i;
	largest_value = number[0];	// �迭 ù ��° ���� largest_value ������ �ִ´�.
	for (i=0; i < elements; i++)
		if(number[i] > largest_value)
			// �迭�� ���� ���������� largest_value�� ���Ѵ�.
			largest_value = number[i];
	return largest_value;
}
