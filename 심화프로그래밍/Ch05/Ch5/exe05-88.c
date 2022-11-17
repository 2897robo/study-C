#include <stdio.h>

int main()
{
	int no, sum, temp, rem;
	for(no=0; no<1000; no++){
		sum = 0;
		temp = no;
		while( temp != 0 ) {
			rem = temp%10;
			sum = sum + rem*rem*rem;
			temp = temp/10;
		}
		if ( no == sum )
			printf("%d ", no);;
	}
}
