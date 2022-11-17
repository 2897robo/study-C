#include <stdio.h> 

int main()
{
	unsigned int index, a, b ;
	int pascal_t[15][30] = {1, 0, };		// 파스칼의 삼각형에 해당하는 값을 저장할 2차 배열 
	
	for(a=1; a<13; a++) {		// 파스칼의 값을 생성하는 루프 
		pascal_t[a][0] = 1;
		for(b=1; b<a+1; b++) {	// 앞의 값에서 뒤의 값을 생성하는 루프 
			pascal_t[a][b] = pascal_t[a-1][b-1] + pascal_t[a-1][b];
		}
	}

	for(a=0; a<13; a++) {		// 화면에 파스칼의 삼각형 출력 
		printf("%*s", 37-a*3, "");		// 앞에 공백이 출력될 부분 계산하여 출력한다. 
		for(b=0; b<a+1; ) {	// 저장된 파스칼의 값 출력한다. 
			printf("%6d", pascal_t[a][b]);
			if( pascal_t[a][++b] < 1)
				break;
		}
		printf("\n");
	}
}
