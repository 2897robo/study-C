#include <stdio.h>
#include <stdlib.h>

int main()
{
	int date, month, year, y1, y2, y, m, d;
	int *cal, week, day, temp;
	cal = (int *) calloc(42, sizeof(int));	// 42 = 6�� x 7�� 
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

	week = 0;
	while (d <= date) {	// 1�Ϻ��� ������ ������ �迭�� �����Ѵ�. 
		*(cal + week*7 + day%7)=d;	// ������ ��ġ�� ����Ͽ� ��¥�� ���� 
		d++;
		day++;	// ������ ��ȭ�ϴ� ���� 
		if(day%7==0)	// �Ͽ����̸� 1�� ���� 
			++week;
	}

	for(week=0; week<6; week++){
		for(day=0; day<7; day++){
			temp = *(cal + week*7 +day); // ����� ���� �����´�.
			if(temp)	// 0�� �ƴϸ� ��¥�� ����Ѵ�. 
				printf("%3d", temp);
			else		// 0�̸� ������ ����Ѵ�. 
				printf("%3s", "");
		}
		printf("\n");
	}
}
