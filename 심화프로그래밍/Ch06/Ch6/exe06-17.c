#include <stdio.h>
#include <math.h>

int main()
{
	int day1, mon1, year1, day2, mon2, year2;
	int ref, dd1, dd2, i;
	int dates[] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

	printf("���� ��¥ �Է�(��, �� ��): ");
	scanf("%d%*c%d%*c%d", &year1, &mon1, &day1);
	printf("������ ��¥ �Է�(��, �� ��): ");
	scanf("%d%*c%d%*c%d", &year2, &mon2, &day2);

	ref = year1;
	if(year2 < year1)
		ref = year2;

	dd1 = 0;
	dd1 = dates[mon1];
	for(i=ref; i<year1; i++) {
		if(i%4 == 0)
			dd1 += 1;
	}

	dd1 = dd1 + day1 + (year1 - ref) * 365;
	printf("%d�� 1�� 1�Ϻ��� �Է��� ������ %d��\n", year1, dd1);
	/* Count for additional days due to leap years*/ 
	dd2=0;
	for(i=ref; i<year2; i++) {
		if(i%4 == 0)
			dd2 += 1;
	}
	dd2 = dates[mon2] + dd2 + day2 + ((year2-ref) * 365);
	printf("%d�� 1�� 1�Ϻ��� �Է��� ������ %d��\n", year2, dd2);
	printf("�� ��¥ ������ �� ���� %d��\n", abs(dd2-dd1));
}
