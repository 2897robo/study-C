#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define WIN 1
#define LOSS 0
int main()
{
	int i, num ,in, Win_Loss;
	srand(time(NULL));
	for(i=0; i<3; i++)
	{
		num = rand() % 3;
		printf("!!! 자 시작 합니다 !!! \n");
		printf("가위! 바위! 보!.(가위=0, 바위=1, 보=2) : ");
		scanf("%d", &in);
		if(in < 0 || in >2) {
			printf("잘못입력하였습니다.\n");
			continue;
		}
		if(num == 0) {
			if(in == 1) 
				Win_Loss = WIN;
			else 
				Win_Loss = LOSS;
		} else if(num == 1) {
			if(in == 0) 
				Win_Loss = LOSS;
			else 
				Win_Loss = WIN;
		} else if(num == 2) {
			if(in == 0)
				Win_Loss = WIN;
			else
				Win_Loss = LOSS;
		}
		printf("컴퓨터 : %d, YOU : %d\n", num, in);

		if(num == in)
			printf("비겼습니다.\n");
		else if(Win_Loss == WIN)
			printf("당신이 이겼습니다.\n");
		else
			printf("컴퓨터가 이겼습니다.\n");
	}
}
