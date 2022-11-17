#include <stdio.h> 

int main()
{
	int x, y, i, sum_x, sum_y; 
	for(x=1; x<999; x++) { 
		sum_x = 0; 
		for(i = 1; i <= x/2; i++)
			if(x % i == 0 )
				sum_x += i; 

		for(y=x+1; y<1000; y++) { 
			sum_y = 0; 
			for(i = 1; i <= y/2; i++) 
				if(y % i == 0 )
					sum_y += i; 
			if(y == sum_x && x == sum_y) 
				printf("%d, %d는 친화수이다.\n", x, y); 
		} 
	} 
}
