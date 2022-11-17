#include <stdio.h>
int main()
{
	int x=1, y;
	
	while(x<=10){
		y=x;
		while(y<x+10){
			printf("%d ", y%10);
			y++;
		}
		printf("\n");
		x++;
	}
}
