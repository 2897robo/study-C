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
		printf("!!! �� ���� �մϴ� !!! \n");
		printf("����! ����! ��!.(����=0, ����=1, ��=2) : ");
		scanf("%d", &in);
		if(in < 0 || in >2) {
			printf("�߸��Է��Ͽ����ϴ�.\n");
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
		printf("��ǻ�� : %d, YOU : %d\n", num, in);

		if(num == in)
			printf("�����ϴ�.\n");
		else if(Win_Loss == WIN)
			printf("����� �̰���ϴ�.\n");
		else
			printf("��ǻ�Ͱ� �̰���ϴ�.\n");
	}
}
