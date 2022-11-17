#include <stdio.h>

int main()
{ 
	float thick = 0.0001, dist = 1.5e11;   /* 1.5 * 10의 11승 */ 
	int x=0; 

	for (;;) {        /* 세미콜론 두개면 무한 루프가 된다. */ 
		x++; 
		thick *=2; 
		if(thick >= dist)
			break;
		/* 무한 루프일 때 빠져나올 수 있는 조건절이 있어야 한다. */ 
	}
	printf("count = %d, thick = %f\n", x, thick); 
}

