#include <stdio.h>

main()
{
	double weight, height, bmi;
	int w, h;

	printf(" Kg:Cm");
	for(h = 130; h<190; h+=5)
		printf("%5d", h);
	printf("\n");

	for(w = 400; w <= 1200; w+=25) {		// 40Kg에서 120Kg까지 2.5Kg 단위로 증가 
		weight = w/10.0;		// 10으로 나누어 40~120까지 계산 
		printf("%5.1f: ", weight);
		for(h = 130; h<190; h+=5) {
			height = h/100.0;		// Cm를 M단위로 변환 
			bmi = weight/(height*height);
			printf("%4.1f ", bmi);
		}
		printf("\n");
	}
	printf(" bmi < 18.5 : 저체중(Underweight)\n");
	printf(" bmi < 25.0 : 정상(Normal)\n");
	printf(" bmi < 30.0 : 과체중(Overweight)\n");
	printf(" bmi < 35.0 : 비만(Obese)\n");
	printf(" bmi < 40.0 : 고도비만(Highly Obese)\n");
	printf(" bmi >= 40.0 : 초고도비만(Extremely Obese)\n");
}
