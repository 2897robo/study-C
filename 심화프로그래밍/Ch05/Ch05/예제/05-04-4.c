#include <stdio.h>
int main()
{
	printf("20194487 ����");

	int day, date, month, year, leaf, y1, y2, y, m, d, i=0;
	do { 
		printf("��-���� �Է��Ͻÿ� : ");
		scanf("%d%*c%d", &year, &month); 
		if (year <1584 || month < 1 || month > 12) { 
			printf("�⵵ �Ǵ� ���� �߸� �ԷµǾ����ϴ�.\n"); 
			continue;
		}
		break;
	} while (1);
	y = year;
	m = month;
	d = 1;
	if (m < 3) {
		y--;
		m += 12;
	}

	y1 = y/100;
	y2 = y%100;

	// Zeller�� ����
	day = (21*y1/4) + (5*y2/4) + (26*(m+1)/10) + d - 1;
	day %= 7;
	if( month==4 || month==6 || month==9 || month==11)
		date = 30;
	else if( month == 2) {
		if( year%4 || (year%100==0 && year%400!=0))
			date = 28;
		else 
			date = 29;
	}
	else 
		date = 31;

	printf("\n\n%10d�� %d��\n\n", year, month); 

	printf(" �� �� ȭ �� �� �� ��\n");
	printf("---------------------\n");

	printf("%*s", day*3, "");
	// ó�� 1���� ���۵Ǳ� ���� ������ ����Ѵ�. 
	while (d <= date) {	// 1�Ϻ��� ������ ������ ����Ѵ�. 
		while (day < 7) {
			printf("%3d", d++);
			day++;
			if (d > date)
				break;
		}
		printf("\n");
		day = 0;
	}
}
