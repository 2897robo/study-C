#include <stdio.h>
int main()
{
	int a=8357, cc = 0234512, xx=0x3cb49; // a는 10진 정수, cc는 8진 정수, xx는 16진 정수 
	unsigned b = 3495823734; 
	float y = 293.29384983e+32;
	double z = 23.4958697; // double이 float보다 더 큰 수를 표시할 수 있다.
	printf("%%d = %d \n", a); //%자체를 출력하고자 할때는 %%를 쓴다. 
	printf("%%o = %o \n", a); //%o : 정수 a의 값을 8진수(Octal)로 출력  
	printf("%%x = %x \n", a); //%x : 정수 a의 값을 16진수(Hexadecimal) 소문자로 출력 
	printf("%%X = %X \n", a); //%X : 정수 a의 값을 16진수(Hexadecimal) 대문자로 출력 
	printf("%%f = %f \n", y); //%f : 실수 y의 값 출력 
	printf("%%e = %e \n", y); //%e : 실수 y의 값을 지수(exponential)형식으로 출력 
	printf("%%u = %u \n", b); //%u : 정수 b의 값을 부호가 없는(양의 정수)로 출력 
	printf("%%d = %d \n", b); //%d : b는 unsigned로 선언되었지만 부호있는 정수로 출력,
					  // 여기서는 음수값 출력 
	printf("%%o = %o \n", cc); //%o : 정수 cc의 값을 8진수(Octal)로 출력 
	printf("%%x = %x, %%d = %d \n\n", xx, xx); //%x : xx를 10진수와 16진수로 출력 
	printf("%%d = %10d \n", a); //%10d : a를 10자리로 맞추어 출력 
	printf("%%f = %10.3f \n", y); //%10.3f : y를 전체 10자리로 출력하며, 소수이하 자리 수는 3자리로 
	printf("%%f = %10.3f \n", z); //%10.3f : z를 전체 10자리로 출력하며, 소수이하 자리 수는 3자리로 
	printf("%%e = %.3e \n", y); //y를 지수형식으로 출력하되 소수이하는 3자리로 
}
