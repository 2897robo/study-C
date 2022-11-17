#include <stdio.h>

int main()
{
	double conv[7][7] = {
		   {1., .001, 3.2808, 1.0936, 0.0006, 3.3, 0.00025},
		   {1000., 1., 3280.8, 1093.6, 0.62138, 3300., 0.25174},
		   {0.3048, 0.0003, 1., 0.3333, 0.00019, 1.0058, 7.76096e-5},
		   {0.9144, 0.0009, 3., 1., 0.0006, 3.0175, 0.0002},
		   {1609.3, 1.6093, 5280., 1760., 1., 5310.8, 0.4098},
		   {0.303, 0.0003, 0.9942, 0.3314, 0.0002, 1., 0.00008},
		   {3927.27, 3.9273, 12885., 4295., 2.4403, 12960.}};
		   // 순서: m, Km, ft, yd, mile, 자(尺), 리(里)
	double input;
	int unit1, unit2;
	char *units[7] = { "m", "Km", "ft", "yd", "Mile", "자", "리"}; 

	printf("1.m, 2.Km, 3.feet, 4.yard, 5.mile, 6.자, 7.리\n");
	do {
		printf("무엇을 : ");
		scanf("%d", &unit1);
		printf("무엇으로 : ");
		scanf("%d", &unit2);
		if(unit1 < 8 && unit2 < 8 && unit1 > 0 && unit2 > 0)
			break;
		printf("다시 !!!\n");
	} while(1);

	printf("바꿀 값을 입력하시오: ");
	scanf("%lf", &input); 
	printf("%f %s = %f %s\n", input, units[unit1-1], 
				input*conv[unit1-1][unit2-1], units[unit2-1]);
}

