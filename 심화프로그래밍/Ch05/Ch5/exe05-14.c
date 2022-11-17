#include <stdio.h>
int main()
{
	int number, digital_root, check_no, temp;
	printf("학번 8자리 입력: "); 
	scanf("%d", &number);
	printf("식별번호 입력: "); 
	scanf("%d", &check_no);
	
	digital_root = number*3;
	while(digital_root>=10) {
		temp = 0;
		while( digital_root>0 ) {
			temp += digital_root%10;
			digital_root /= 10;
		}
		digital_root = temp;
	}
	if( check_no == digital_root )
		printf("학번 %d, 식별번호 %d 정상\n", number, check_no);
}
