#include <stdio.h>

int main()
{
	int men, women, children;

	for(men = 1; men < 34; men++)
		for(women = 1; women < 50; women++)
			for(children = 2; children < 100; children+=2)
				if( men + women + children == 100) {
					if( men*3 + women*2 + children/2 == 100)
						printf("남자%2d명 + 여자%2d명 + 어린이%2d명 = 100\n", men, women, children);
				}
}
