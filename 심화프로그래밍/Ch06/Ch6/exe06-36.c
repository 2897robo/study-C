#include <stdio.h>

int main()
{
	int score[20][2] = { {98,}, {78,}, {38,}, {94,}, {92,},
	{58,}, {90,}, {86,}, {55,}, {44,},
	{39,}, {49,}, {59,}, {68,}, {79,},
	{77,}, {90,}, {70,}, {80,}, {68,}};
	int rank, i, j;
	for(i=0; i<20; i++){
		rank = 1;
		for(j=0; j<20; j++){
			if(score[i][0] < score[j][0])
				rank++;
		}
		score[i][1] = rank;
	}
	for(i=0; i<20; i++)
		printf("%3d: %2d\n", score[i][0], score[i][1]);
	
}
