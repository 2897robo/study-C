#include <stdio.h>

main()
{
	int farenheit;	// ȭ�� 
	double celcius;	// ���� 
	// ���� = (5/9)*(ȭ��-32); 
	// ȭ�� = (9/5)*����+32; 

	for( farenheit=-10; farenheit<=130; farenheit+=5) {
		celcius = (5./9.)*(farenheit-32.);
		printf("ȭ�� %3d = ���� %5.1f\n", farenheit, celcius);
	}
}
