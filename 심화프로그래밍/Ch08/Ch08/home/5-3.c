#include <stdio.h>
int fib(int); 

int main()
{ 
	printf("20194487 ±è±â¿í\n");
	int ite, l; 
	printf("Enter limit : "); 
	scanf("%d",&l); 
	for(ite=0; ite<l; ite++)
		printf("%d ", fib(ite));
} 

int fib(int n) {
	if(n <= 0)
		return 0;
	else if(n == 1)
		return 1;
	return fib(n-2)+fib(n-1);
} 
