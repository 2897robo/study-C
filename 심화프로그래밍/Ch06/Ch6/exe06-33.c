#include <stdio.h>
#include <math.h>
#define pi 3.141593

int main()
{
	int x, y, sin_value[37], cos_value[37];
	static char graph[37][41];
	
	for(x=0; x<37; x++) {	// 배열에 sine 값 저장하는 루프 
		sin_value[x] = (int)(sin(pi*x*10/180)*20)+20; 
		cos_value[x] = (int)(cos(pi*x*10/180)*20)+20; 
	}

	for(x=0; x<37; x++)	// x축 표시 
		graph[x][20] = '-';

	for(y=0; y<41; y++)	// y축 표시 
		graph[0][y] = '|';

	for(x=0; x<37; x++) {
		graph[x][sin_value[x]] = 's';	// 배열의 sine 값 위치에 's'를 저장하는 루프 
		graph[x][cos_value[x]] = 'c';	// 배열의 cosine 값 위치에 'c'를 저장하는 루프 
	}

	printf("\n");
	for(y=40; y>=0; y--) {		// 저장된 그래프 출력 
		for(x=0; x<37; x++)	// sin 위치에 '*'출력, 미리 배열에 저장해 둔 것. 
			printf("%2c", graph[x][y]);
		printf("\n");
	}
}
