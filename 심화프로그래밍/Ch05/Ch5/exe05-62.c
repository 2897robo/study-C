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

	printf("1 ���� %d���� ������ �ϳ��� �����Ͻÿ�.\n", LIMIT); 
	mask = 1;
	guess = 0;
	for(i=1; i<=POWER; i++, mask<<=1) {
		printf("\n����� ������ ���� Group %d�� �ֽ��ϱ�?(y/n) : ", i);
		yn = getche();
		if(yn == 'y' || yn == 'Y')
			guess += mask;
	}
	printf("\n\n����� ������ ���� %d�Դϴ�\n\n\n", guess);
}
