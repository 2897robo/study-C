#include <stdio.h>
int main()
{
	int year, month, date, yes=0, sum=0, leaf=0; 
	int days[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273,
		     304, 334 }; //������ �� ����

	do {
		printf("YYYY/MM/DD : ");
		scanf("%d%*c%d%*c%d", &year, &month, &date);
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			leaf = 1;
		if (month > 0 && month < 13 && date > 0) {
			if (month == 2) {
				if (leaf) {
					if (date < 30)
						yes = 1;
				}
				else {
					if (date < 29)
						yes = 1;
				}
			}
			else if (month == 4 || month == 6 ||
				month == 9 || month == 11) {
				if(date < 31)
					yes = 1;
			}
			else {
				if (date < 32)
					yes = 1;
			}
		}
	} while (!yes);

	sum += days[month] + date;
	if (leaf && month>2)
		sum++;

	printf("%d�� %d�� %d���� %d��° ���Դϴ�.\n", year, month, date, sum);
}
