#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	printf("20194487 김기욱");
	int lotto[45], shuffle, x, y;
	srand(time(0));  // 난수 초기화
	for (x=0; x<45; x++)
 		lotto[x] = x+1; // 1~45까지 배열에 저장
	// 배열에 저장된 로또 번호를 5000번 섞는다.
	for (shuffle = 0; shuffle <5000; shuffle++ ) {
		x = rand()%45; // 교환할 첫 번째 숫자 위치
		y = rand()%45; // 교환할 두 번째 숫자 위치
		lotto[x] = lotto[x] + lotto[y] - (lotto[y] = lotto[x]);
		// 선택된 두 개의 위치 교환 
	}
	// 처음 6개(맨 앞쪽으로 이동된 번호)의 번호만 정렬
	for (x=0; x<5; x++)
		for (y=x+1; y<6; y++) //비교하여 위치 교환
			if (lotto[x] > lotto[y])
				lotto[x] = lotto[x] + lotto[y] - (lotto[y] = lotto[x]);

	// 처음 6개의 선택된 번호만 출력 
	for (x=0; x<6; x++)
		printf(" %d  ", lotto[x]);
	printf("\n");
}
