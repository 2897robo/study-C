#include <stdio.h>
int main()
{
	printf("20194487 ����");

	int score;
	do {		// 0���� 100������ ���� �ƴϸ� �ٽ� �Է¹޴´�.
		printf("0���� 100������ ������ �Է��Ͻÿ� : ");
		scanf("%d", &score);
	} while (score < 0 || score > 100);
	printf("%d : ", score);
	switch(score/10) {	// ������ ����Ѵ�.
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
