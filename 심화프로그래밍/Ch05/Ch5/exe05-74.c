#include <stdio.h>

main()
{
	double weight, height, bmi;
	int w, h;

	printf(" Kg:Cm");
	for(h = 130; h<190; h+=5)
		printf("%5d", h);
	printf("\n");

	for(w = 400; w <= 1200; w+=25) {		// 40Kg���� 120Kg���� 2.5Kg ������ ���� 
		weight = w/10.0;		// 10���� ������ 40~120���� ��� 
		printf("%5.1f: ", weight);
		for(h = 130; h<190; h+=5) {
			height = h/100.0;		// Cm�� M������ ��ȯ 
			bmi = weight/(height*height);
			printf("%4.1f ", bmi);
		}
		printf("\n");
	}
	printf(" bmi < 18.5 : ��ü��(Underweight)\n");
	printf(" bmi < 25.0 : ����(Normal)\n");
	printf(" bmi < 30.0 : ��ü��(Overweight)\n");
	printf(" bmi < 35.0 : ��(Obese)\n");
	printf(" bmi < 40.0 : ����(Highly Obese)\n");
	printf(" bmi >= 40.0 : �ʰ���(Extremely Obese)\n");
}
