#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int lotto[45][2], i, j, temp;
	srand(time(0));
	for(i=0; i<45; i++) {
		lotto[i][0] = i+1;
		lotto[i][1] = rand();
	}
	for(i=0; i<45; i++){
		for(j=0; j<45; j++){
			if(lotto[i][1] > lotto[j][1]) {
				temp = lotto[i][0];
				lotto[i][0] = lotto[j][0];
				lotto[j][0] = temp;
				temp = lotto[i][1];
				lotto[i][1] = lotto[j][1];
				lotto[j][1] = temp;
			}
		}
	}
	for(i=0; i<5; i++)	
		printf("%d ", lotto[i][0]);
}
