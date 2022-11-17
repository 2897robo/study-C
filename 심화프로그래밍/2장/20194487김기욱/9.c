#include <stdio.h>

int main()
{
	printf("이름 : 김기욱, 학번 : 20194487 \n");

	double fuel = 1 * 3.78; //리터
	double kilo = fuel * 11.5; //km
	double mile = kilo / 1.6; //mile

	printf("이 차는 1갤런당 %lf마일을 운행할수 있다.\n", mile);

	fuel = 15 * 3.78; //리터
	kilo = fuel * 11.5; //km
	mile = kilo / 1.6; //mile
	printf("고로 15갤런 주유시 %lf마일을 운행할수 있다.\n", mile);
	
}
