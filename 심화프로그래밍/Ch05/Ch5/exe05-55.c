#include <stdio.h>
int main()
{
 	int Num, Sum, i, j;
 	for(i=1; i<=1000; i++) {
		Sum = 0;
		for(j=1; j<=i/2; j++) {
			if(i%j == 0)
				Sum += j;
		}
		if( i == Sum)
			printf("%d ", i);
	}
}

/*
#include <stdio.h> 

int main()
{
	int x, y, sum; 

	for (x=2; x <= 1000; x++) { 
		sum= 0;                            // sum�� �ʱ�ȭ�Ѵ�. 
		for (y=1; y <= x/2; y++) {
		// x�� ���� ū ���(x/2)���� ������ ���鼭 x�� ����� ���Ѵ�. 
			if (x%y == 0) sum += y;
				// x�� y�� ����� �������� 0�� ��(���)�� 
				// ���� ���Ѵ�. 
		} 
		if (x == sum) {	// �������̸� ����� ����Ѵ�. 
			printf("%d�� �����\n",x); 
			for (y=1; y <= x/2; y++) 
				if (x % y ==0)
					printf("%d ", y);
			if (x == sum) printf("\n%d��(��) �������̴�.\n\n", x); 
		}
	}
}
*/
