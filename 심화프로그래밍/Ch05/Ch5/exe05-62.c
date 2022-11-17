#include <stdio.h>
#define POWER 5		// 2's power 
#define LIMIT 31		// 5 power of 2 

int main()
{
	int i, j, mask=1, guess;
	char yn;

	for(i=1; i<=POWER; i++) {
		printf("Group %d : ", i);
		for(j=1; j<=LIMIT; j++)
		if( j & mask)
			printf("%d ", j);
		printf("\n\n");
		mask <<= 1;
	}

	printf("1 부터 %d까지 숫자중 하나를 생각하시오.\n", LIMIT); 
	mask = 1;
	guess = 0;
	for(i=1; i<=POWER; i++, mask<<=1) {
		printf("\n당신이 생각한 수가 Group %d에 있습니까?(y/n) : ", i);
		yn = getche();
		if(yn == 'y' || yn == 'Y')
			guess += mask;
	}
	printf("\n\n당신이 생각한 수는 %d입니다\n\n\n", guess);
}
