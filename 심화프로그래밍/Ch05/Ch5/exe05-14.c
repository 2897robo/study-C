#include <stdio.h>
int main()
{
	int number, digital_root, check_no, temp;
	printf("�й� 8�ڸ� �Է�: "); 
	scanf("%d", &number);
	printf("�ĺ���ȣ �Է�: "); 
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
		printf("�й� %d, �ĺ���ȣ %d ����\n", number, check_no);
}
