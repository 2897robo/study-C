#include <stdio.h> 

int main()
{
	int day, date, month, year, leaf, y1, y2, y, m, d;
	char week[][3] = {"��","��","ȭ","��","��","��","��"};
	//�ѱ��� 2����Ʈ�̱� ������ 2���� �迭 ��� 

	do { 	// �������� �����Ͱ� �ԷµǾ����� �˻��ϴ� ���� 
		printf("��-��-���� �Է��Ͻÿ� : ");
		scanf("%d%*c%d%*c%d", &year, &month, &date); 
		if (year <1583 || month < 1 || month > 12) { 
			printf("�⵵ �Ǵ� ���� �߸� �ԷµǾ����ϴ�.\n"); 
			continue; 
		}
		if(date < 1 || date >31) {
			 printf("��¥�� �����̰ų� 31���� Ů�ϴ�.\n"); 
			 continue; 
		} else if( (month == 4 || month == 6 || month == 9 || month == 11) && date > 30) {
			 printf("��¥�� 30���� Ů�ϴ�.\n"); 
			continue;
		} else if( month == 2 ) {
			leaf = (year%400 == 0) || (year%100 != 0 && year%4 ==0);
			if( (leaf && date > 29) || (!leaf && date > 28)) {
				 printf("��¥�� 28 �Ǵ� 29���� Ů�ϴ�.\n"); 
				continue;
			}
		}
		break;
	} while (1);

	y = year;
	m = month;
	d = date;
	if (m < 3) { // ���� 1, 2���̸� ���⵵�� 13, 14���� ����Ѵ�. 
		y--;
		m += 12;
	}

	y1 = y/100;
	y2 = y%100;

	day = (21*y1/4) + (5*y2/4) + (26*(m+1)/10) + d - 1;
	day %= 7;

	printf("%d�� %d�� %d���� %s�����Դϴ�.\n", year, month, date, week[day]);
}
