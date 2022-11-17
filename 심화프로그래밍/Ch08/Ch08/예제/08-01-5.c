#include <stdio.h>
#include <math.h>
double triangle_area(int, int, int); /* 함수 원형(prototype) */ 
int is_triangle(int, int, int);

int main()
{
	int i, j, k;
	printf("첫 번째 수를 입력하시오 : ");
	scanf("%d", &i);
	printf("두 번째 수를 입력하시오 : ");
	scanf("%d", &j);
	printf("세 번째 수를 입력하시오 : ");
	scanf("%d", &k);
	if(is_triangle(i, j, k))
		printf("삼각형의 면적은 %f이다.\n", triangle_area(i, j, k));
}

double triangle_area(int x, int y, int z) {
	double s;
	s = (x+y+z)/2.0;
	return sqrt(s*(s-x)*(s-y)*(s-z));
}

int is_triangle(int i, int j, int k) {
	if( i <= 0 || j <= 0 || k <= 0) // 한 변이라도 0이하이면 삼각형이 아님 
		return 0;
	// 두 변의 길이의 합이 한 변의 길이의 합보다 작으면 
	if( i+j < k || i+k < j || j+k < i )
		return 0;		// 삼각형이 아니고, 
	else 
		return 1;		// 그렇지 않으면 삼각형이다. 
}
