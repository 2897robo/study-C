#include <stdio.h>

int main()
{
	int score;

	do { // 0���� 100������ ���� �Է����� ���� ������ ����������. 
		printf("0���� 100������ ������ �Է��Ͻÿ� : ");
		scanf("%d", &score);
	} while (score < 0 || score >100);

	printf("%d : ", score);
	switch (score/5) {
		case 20 : 
		case 19 : printf("A+");		break;
		case 18 : printf("A");		break;
		case 17 : printf("B+");		break;
		case 16 : printf("B");		break;
		case 15 : printf("C+");		break;
		case 14 : printf("C");		break;
		case 13 : printf("D+");		break;
		case 12 : printf("D");		break;
		default : printf("F");
	}
	printf("\n"); 
} 

/*
#include <stdio.h>

int main()
{
	int score;

	do { // 0���� 100������ ���� �Է����� ���� ������ ����������. 
		printf("0���� 100������ ������ �Է��Ͻÿ� : ");
		scanf("%d", &score);
	} while (score < 0 || score > 100);
	
	printf("%d : ", score);
	switch(score/10) {
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

*/
