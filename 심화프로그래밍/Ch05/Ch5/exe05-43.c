#include <stdio.h> 

int main()
{
	int a, b, c, d, e, abcde, edcba;

	for(abcde=10000; abcde<25000; abcde++) {
		edcba = abcde * 4;
		a = abcde/10000 == edcba%10; 	// 조건을 만족하면 1, 그렇지 않으면 0을 저장한다. 
		b = (abcde/1000)%10 == (edcba/10)%10;	// 각 자리의 수를 비교한다. 
		c = (abcde/100)%10 == (edcba/100)%10;
		d = (abcde/10)%10 == (edcba/1000)%10;
		e = abcde%10 == edcba/10000;
		if(a && b && c && d && e)
 			printf("%d * 4 = %d\n", abcde, edcba);
	}
}
/*
#include <stdio.h> 

int main()
{
	int abcde, edcba; 
	int temp;

	for(abcde=10000; abcde<25000; abcde++) {
		edcba = abcde * 4;
		if( abcde/10000 == edcba%10 && (abcde/1000)%10 == (edcba/10)%10 )
			if( (abcde/100)%10 == (edcba/100)%10 && (abcde/10)%10 == (edcba/1000)%10)
				if(abcde%10 == edcba/10000 )
					printf("%d * 4 = %d\n", abcde, edcba);
	}
}
*/
