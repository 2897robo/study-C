#include <stdio.h> 

int main()
{
	int s1, s25, s125;
	for(s125=1; s125<=2; s125++)		// 125Kg짜리 추 
		for(s25=1; s25<=14; s25++)		// 25Kg짜리 추 
			for(s1=1; s1<330; s1++)		// 1Kg짜리 추 
				if(s1 + s25*25 + s125*125 == 328)
					printf("1kg = %3d, 25kg = %2d, 125kg = %2d\n", s1, s25, s125);
}
