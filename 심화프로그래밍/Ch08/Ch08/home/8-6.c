/* qsort all in 1*/ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int (*compare) (const void *, const void *);	// 함수의 포인터
// 모든 함수를 동일함 형태로 다시 만든다.
int compare_ints (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}
// 모든 함수를 동일함 형태로 다시 만든다.
int compare_strings (const void *a, const void *b) { 
	return strcmp(*(char **)a, *(char **)b);
}

// 모든 함수를 동일함 형태로 다시 만든다.
int compare_doubles (const void * x, const void * y) {
	if (*(double *)x > *(double *)y)
		return 1;
	else if (*(double *)x < *(double *)y)
		return -1;
	else 
		return 0;
}
// 초기값, 정렬되지 않은 값을 미리 배열에 저장해 둔다.
int values[] = { 40, 10, 100, 90, 20, 25 };
char *line_array[] = {"grape", "pear", "banana", "apple", "orange", "grapefruit"};
double a[] = {29.3, 493.2, 9.89, 8393.4, 2939.4, 0.002, 1929.3, 18.1};

int main ()
{
	printf("20194487 김기욱\n");
	int i = 0;
	compare = compare_ints;	   // 함수의 포인터에 정수 비교함수 대입
	qsort (values, 6, sizeof(int), compare);	// 정수 정렬
	printf("정수 정렬 :\n"); 
	for (i=0; i<6; i++)
		printf ("%d ",values[i]);
	printf("\n\n");

	compare = compare_strings;  // 함수의 포인터에 문자열 비교함수 대입
	qsort(line_array, 6, sizeof(char *), compare);
	printf("문자열 정렬 :\n"); 
	for (i=0; i<6; i++)
		printf("%s  ", line_array[i]);
	printf("\n\n");

	compare = compare_doubles;  // 함수의 포인터에 실수 비교함수 대입
	qsort(a, 8, sizeof(double), compare);
	printf("실수 정렬 :\n"); 
	for (i=0;i<8;i++)
		printf("%7.1f  ",a[i]);
	printf("\n\n");
}
