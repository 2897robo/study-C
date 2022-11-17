#include <stdio.h> 

int main()
{
	int a, b, x, cnt=0; 

	for (a=0; a<10; a++) { 
		for (b=0; b<10; b++) { 
			x = 300000 + (a*10101) + (b*1010);
			if (x%6 == 0 && a !=  b) {
				printf("%d\t",x);
				cnt++;
			}
		}
	}
	printf("\n3ababa를 만족하는 수는 %d개 있다\n", cnt); 
}
