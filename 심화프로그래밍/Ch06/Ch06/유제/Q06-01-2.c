#include <stdio.h>
main()
{
	double var[10] = {79.6, 88.4, 90.6, 93.5, 70.5, 69.3, 81.2, 80.5, 60.8, 99.3};
	double h;
	int index;
	
	for(index = 0; index <10; index++)
		h += 1./var[index];

	h = index/h;
	printf("Á¶È­Æò±Õ = %f\n", h);
}
