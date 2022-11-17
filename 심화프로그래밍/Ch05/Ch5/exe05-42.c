#include <stdio.h> 
#include <math.h>

int main()
{
	int x, area, round;
	for(x=1; x<10; x++) {
		area = x*x;
		round = 4 * x;
		if(area < 100 && (round % 12 == 0 || area % 12 ==0) && area > round)
			if(area % 2 == 0 || round % 2 == 0)
				if(area/10 + area%10 == round/10 + round%10)
					if(area == (int)sqrt(area) * (int)sqrt(area) &&
						round == (int)sqrt(round) * (int)sqrt(round))
						printf("%d\n", x);	// 조건이 만족하면 출력한다. 
	}
}

/*
#include <stdio.h> 
#include <math.h>

int main()
{
	int x, area, round;
	for(x=1; x<10; x++) {
		area = x*x;
		round = 4 * x;
		if(!(round % 12 == 0 || area % 12 ==0)) continue;
		if(!(area > round)) continue;
		if(!(area % 2 == 1 || round % 2 == 1)) continue;
		if(!(area/10 + area%10 == round/10 + round%10)) continue;
		if(!(area == (int)sqrt(area) * (int)sqrt(area))) continue;
		if(!(round==(int)sqrt(round)*(int)sqrt(round))) continue;
		printf("%d\n", x);
	}
}
*/
