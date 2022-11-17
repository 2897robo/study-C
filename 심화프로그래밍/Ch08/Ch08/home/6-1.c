#include <stdio.h>
int main(int argc, char* argv[])
{ 
	printf("20194487 ±è±â¿í\n");
	int i; 
	printf("argc = %d\n",argc); 
	for (i=0; i< argc; ++i) 
		printf("argv[%d] = %s\n",i, argv[i]); 
} 
