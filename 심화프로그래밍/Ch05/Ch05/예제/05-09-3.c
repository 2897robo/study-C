#include <stdio.h>
int main()
{
	int number, digital_root, dr, temp;
	printf("정수 입력: "); 
	scanf("%d", &number);
	digital_root = number;
	while(digital_root>=10) {
		for( temp = 0; digital_root>0; digital_root/=10 )
			temp += digital_root%10;
		digital_root = temp;
	}
	printf("%d의 디지털 근 : %d\n", number, digital_root);
}
