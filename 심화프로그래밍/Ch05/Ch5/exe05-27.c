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
			if (total_cnt%10 == 0)	// 한 줄에 10개씩 출력하고 줄을 바꾼다. 
				printf("\n");
			sub_cnt++;
		} 
	} 
	printf("\n 100번째 항은 %d이다\n", sub_no); 
}
