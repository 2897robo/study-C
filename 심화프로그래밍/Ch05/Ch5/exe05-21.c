#include <stdio.h> 

int main() {
	int year=1, annual_salary = 24000000;
	int house = 100000000, total_save = 0;
	double inc = 0.045, save_rate = .15, interest=0.05;

	do { 
		total_save += (int)(annual_salary*save_rate+0.5) +
				(int)(total_save*interest);
		printf("%3d년차 연봉 : %10d\t", year, annual_salary);
		printf("저축 금액 : %10d\n", total_save);
		if (total_save > house) { 
			printf("%d년 후 저축액은 %10d입니다.\n", year, total_save); 
			break;
		}
		year++;
		annual_salary += (int) (annual_salary*inc+0.5);
		annual_salary -= annual_salary % 100;	// 100원 미만 절삭
	} while (1);
}
