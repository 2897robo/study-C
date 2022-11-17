#include <stdio.h>
#include <math.h>

int main()
{
	int day1, mon1, year1, day2, mon2, year2;
	int dd1, dd2, i;
	int month_day[] = {0, 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int dates[] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

	printf("������� �Է�(��, �� ��): ");
	scanf("%d%*c%d%*c%d", &year1, &mon1, &day1);
	printf("���� ��¥ �Է�(��, �� ��): ");
	scanf("%d%*c%d%*c%d", &year2, &mon2, &day2);

	// �¾ ���� �� �� ��� 
	dd1 = 365 - dates[mon1] - day1 + 1;
	if( year1 % 400 == 0 || (year1 % 100 != 0 && year1 % 4 == 0 ) ) {
		if(mon1 == 1 || ( mon1 == 2 && day1 < 29) )	// ������ �����̰� 2�� �����̸� 
			dd1 += 1;		// 1�� ���� 
	}

	// �¾ ���� �غ��� �۳� 12�� 31�ϱ��� ��� 
	if(year2 - year1 > 1)
		dd1 = dd1 + (year2 - year1 - 1) * 365;
	// �ظ��� ������ ã�� �Ϸ羿 ���� 
	for(i=year1+1; i<year2; i++) {
		if( i % 400 == 0 || (i % 100 != 0 && i % 4 == 0 ) ){
			dd1 ++;
		}
	}

	// ������ ���ñ��� ��� 
	dd2 = dates[mon2] + day2;
	if( year2 % 400 == 0 || (year2 % 100 != 0 && year2 % 4 == 0 ) ) {
		if( mon2 > 2) 	// ���ذ� �����̰� 2�� ���ĸ� 1�� ����. 
			dd2 ++;
	}
	printf("���� ���� �� ���� %d��\n", dd1+dd2);
}
