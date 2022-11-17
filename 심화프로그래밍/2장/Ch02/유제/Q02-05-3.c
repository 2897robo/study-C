#include <stdio.h>
int main()
{
  	double mile, km, feet;
	printf(" Mile ют╥б : ");
	scanf("%lf", &mile);
	km = mile * 1.609;
	feet = mile * 5280;
 	printf("%fMile = %fKm = %ffeet\n", mile, km, feet);
}
