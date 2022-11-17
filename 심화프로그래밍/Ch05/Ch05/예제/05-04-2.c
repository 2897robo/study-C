#include <stdio.h>
int main()
{
	printf("20194487 김기욱");

	int score;
	do {		// 0에서 100사이의 값이 아니면 다시 입력받는다.
		printf("0에서 100사이의 정수를 입력하시오 : ");
		scanf("%d", &score);
	} while (score < 0 || score > 100);
	printf("%d : ", score);
	switch(score/10) {	// 평점을 출력한다.
		case 10:
		case 9: printf("A"); break;
		case 8: printf("B"); break;
		case 7: printf("C"); break;
		case 6: printf("D"); break;
		default : printf("F");
	}

	if( (score > 60 && score%10 >= 5) || score == 100 )
		printf("+");
	printf("\n");
}
