#include <stdio.h>
int findMaxNum(int[], int); 

int main() 
{ 
	int num1[] = {5, 34, 56, -12, 3, 19}; 
	int num2[] = {1, -2, 34, 207, 93, -12}; 

    printf("numb1[]의 최댓값은 %d이다.\n", findMaxNum(num1, 6)); 
    printf("numb2[]의 최댓값은 %d이다.\n", findMaxNum(num2, 6)); 
}

int findMaxNum(int number[], int elements) 
{ 
	int largest_value, i;
	largest_value = number[0];	// 배열 첫 번째 값을 largest_value 변수에 넣는다.
	for (i=0; i < elements; i++)
		if(number[i] > largest_value)
			// 배열의 값을 순차적으로 largest_value와 비교한다.
			largest_value = number[i];
	return largest_value;
}
