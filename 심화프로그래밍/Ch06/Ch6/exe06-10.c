#include <stdio.h>

int main() {
	int i, j, a[]={1,3,5,7,9,10}, b[]={2,4,5,6,14,15,20,40,60,66,69}; 
	// 정렬된 두 배열 a, b 
	int a_position=0, b_position=0, c_position=0;
	int loop_size, size_a, size_b, c[30];	// c는 결과 값이 저장될 배열 

	size_a = sizeof(a)/sizeof(int);	// a 배열의 크기 계산 
	size_b = sizeof(b)/sizeof(int);	// b 배열의 크기 계산 
	loop_size = size_a + size_b;	// a, b 두 배열을 합한 크기 
	for(c_position=0; c_position<loop_size; c_position++) {
		// 오름차순배열이므로 작은 값을 먼저 c배열에 저장한다.
		if( a[a_position] < b[b_position])
			c[c_position] = a[a_position++];
		else 
			c[c_position] = b[b_position++];
		// a배열이 모두 복사되었는지 검사하여 모두 복사되었다면, 
		if( a_position > size_a) {
			a_position--;
			break;		// 루프를 빠져나간다. 
		}
		// b배열이 모두 복사되었는지 검사하여 모두 복사되었다면, 
		else if(b_position > size_b) {
			b_position--;
			break;		// 루프를 빠져나간다. 
		}
	}

	if(b_position < size_b)		// b배열이 남아 있다면 
		for(i=b_position; i<size_b; i++)	//모두 c배열로 복사한다. 
			c[c_position++] = b[b_position++];

	else if(a_position < size_a)	// a배열이 남아 있다면 
		for(i=a_position; i<size_a; i++)	//모두 c배열로 복사한다. 
			c[c_position++] = a[a_position++];
	
	for(i=0; i<loop_size; i++)	// 결과를 출력한다. 
		printf("%d  ", c[i]);
	printf("\n");
}
