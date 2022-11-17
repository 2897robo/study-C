#include <stdio.h>
#include <math.h>

int main() {

	double a,b,c, re, re2;

	printf("계수 a를 입력하시오 : ");
	scanf("%lf", &a);
	printf("계수 b를 입력하시오 : ");
	scanf("%lf", &b);
	printf("계수 c를 입력하시오 : ");
	scanf("%lf", &c);

	if (a==0) {
		re = -c/b;
		printf("위의 이차 방정식의 실근은 %lf입니다. \n", re);
		}
	else if (b*b-4*a*c < 0) {
		printf("위의 이차 방정식의 실근은 존재하지 않습니다. \n");
		}
	else {
		re = (-b + sqrt((b*b) - (4*a*c)) )/(2*a);
		re2 = (-b - sqrt((b*b) - (4*a*c)) )/(2*a);
		printf("위의 이차 방정식의 실근은 %lf과 %lf입니다. \n", re, re2);
		}


	return 0;
}
