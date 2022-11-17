#include <stdio.h> 

int main()
{ 
	int i, j[10]; 

	for (i=0; i<10; i++) { 
		j[i] = i*100; 
		printf("j[%d] = %d\n", i, j[i]); 
	} 
}
