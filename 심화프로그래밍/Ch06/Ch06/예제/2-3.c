#include <stdio.h>
int main()
{
	printf("20194487 김기욱");
	int i, score[10][4] =  {{30,54,0,0}, {46,84,0,0},
	 {75,88,}, {65,87,}, {98,65,}, {99,94,},
	 {90,88,}, {95,78,}, {98,80,}, {95,81,}};
	// 국어, 영어 점수만 초깃값을 넣고, 합과 평균은 비워둬도 된다.
	for (i=0; i<10; i++) { 
		score[i][2] = score[i][0] + score[i][1]; 
		score[i][3] = score[i][2] / 2; 
		printf("국어점수가 %d이고 ",score[i][0]);
		printf("영어점수가 %d인 학생의 ", score[i][1]);
		printf("총점은 %d이고 ",score[i][2]);
		printf("평균은 %d이다.\n",score[i][3]);
	}
}
