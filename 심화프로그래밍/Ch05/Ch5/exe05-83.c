#include <stdio.h>

int main() {
	int i, k=2; // k : 단수, i : 1부터 9까지 변화 

	for (i=1; k<=9; i++) {	// k가 9보다 작거나 같을 때까지 
		if (i==1)
			printf("%5d단\n", k); 
		printf("%2d * %2d = %2d\n", k, i, k*i);

		if (i==9) {	// i가 9가 되면 
			k++;	// k증가하고 
			i=0;	// i=0으로 초기화 
			printf("\n");	// 줄 바꿈 
		}
	}
}
