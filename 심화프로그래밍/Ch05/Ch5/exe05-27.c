#include <stdio.h> 

int main()
{
	int sub_cnt, total_cnt=0, sub_no=0;

	while (total_cnt<=100) { 
		sub_no++;
		sub_cnt = 1;
		while (sub_cnt<=sub_no) {
			total_cnt++;
			if (total_cnt>100)
				break;
			printf("%3d, ", sub_no); 
			if (total_cnt%10 == 0)	// �� �ٿ� 10���� ����ϰ� ���� �ٲ۴�. 
				printf("\n");
			sub_cnt++;
		} 
	} 
	printf("\n 100��° ���� %d�̴�\n", sub_no); 
}
