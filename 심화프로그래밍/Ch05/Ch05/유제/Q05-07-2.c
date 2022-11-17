#include <stdio.h>
int main()
{
	int puppy, chicken, eyes, legs;
	for (puppy=1; puppy<15; puppy++)
		for (chicken=1; chicken<30; chicken++) {
			eyes = (puppy + chicken)*2;
			legs = chicken*2 + puppy*4;
			if (eyes == 38 && legs == 60)
				printf("°­¾ÆÁö = %d, ´ß=%d\n", puppy, chicken);
		}
}
