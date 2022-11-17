#include <stdio.h>
#include <math.h>

int main()
{
	int deg=0;

	while( deg <= 360 ){
		printf("cos(%3d) = %10.7f\n", deg, cos((deg/180.)*3.141592));
		deg += 15;
	}
}
