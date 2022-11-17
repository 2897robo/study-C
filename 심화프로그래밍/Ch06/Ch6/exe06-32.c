#include <stdio.h>

int main() {
	int x, y, value[20] = { 15, 30, 28, 24, 9, 4, 10, 22, 20,
			11, 11, 23, 9, 22, 13, 18, 17, 11, 2, 21};
	static char histogram[20][30]; // 최대 30까지만 되도록 함

	// 배열에 히스토그램 표시 문자 ‘M’을 저장하는 루프
	for(x=0; x<20; x++) {	
		for(y=0; y<value[x]; y++) {
			histogram[x][y] = 'M';
		}
	}
	for(y=29; y>=0; y--) {		// 저장된 히스토그램 출력 
		if( (y+1)%5 == 0) 	// y축의 값을 5간격으로 출력  
			printf("%2d|", y+1);
		else 
		    printf("%3s", "|"); 	// y축 출력 

		// 히스토그램의 ‘M’출력, 미리 배열에 저장해 둔 것. 
		for(x=0; x<20; x++)	
			printf("%3c", histogram[x][y]);
		printf("\n");
	}
	printf(" 0|"); 		// 원(0)점 출력 
	for(x=0; x<=20; x++)	// x축 출력 
		printf("---");
	printf("\n%3s", "");	// x축의 값 출력 
	for(x=0; x<20; x++)
		printf("%3d", value[x]);
	printf("\n");
}
