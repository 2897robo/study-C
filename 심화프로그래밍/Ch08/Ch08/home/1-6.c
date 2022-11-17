#include <stdio.h>
void gregorian(int, int, int);
int valid_date(int, int, int);
void one_month_cal(int, int);
int last_day(int, int); 	// ���� ���� ����
char day[][4]={"��", "��", "ȭ", "��", "��", "��", "��"};

int main()
{
	printf("20194487 ����\n");
	int year, month, date;
	printf("�׷������� 1582�� 10�� 15�� ���ĺ��� ����� �����մϴ�.\n");

	while(1) {
		printf("\n������ �Է��Ͻÿ�(0:exit) : ");
		scanf("%d", &year);

		if( year <= 0) {		// �⵵�� 0 �Ǵ� �����̸� ������. 
			printf("Bye...\n");
			break;
		}
		printf("���� �Է��Ͻÿ� : ");
		scanf("%d", &month);
		printf("���� �Է��Ͻÿ� : ");
		scanf("%d", &date);

		if( !valid_date(year, month, date) ) { // �Էµ� ��¥ �˻� 
			printf("���ڰ� �߸� �ԷµǾ����Ƿ� �ٽ� ");
			printf("�Է��Ͽ��ֽñ� �ٶ��ϴ�.\n");
			continue;
		}
		printf("\n\n");

		// �׷��������� �˻� 
		if( year > 1582 || (year == 1582 && month > 10 ) || 
			(year == 1582 && month == 10 && date >= 15) )
			gregorian(year, month, date);
		else if( year < 1582 || (year == 1582 && month < 10 )
			|| (year == 1582 && month == 10 && date < 15) ) {
			printf("�� ���ڴ� �׷����¿��� ���� ���Դϴ�.\n");
			continue;
		}
		one_month_cal(year, month);	// 1���� �޷��� ����Ѵ�. 
	}
}

/*�� ��, �� ��, �� ���� ���� �������� �˻��ϴ� �Լ� */ 
void gregorian(int y, int m, int d) { /* �׷����� ���, y:��, m:��, d:�� */ 
	int a, c, weekday; 
	/* a:�ӽó⵵, c: �ӽÿ�, weekday: ���ϰ��� ���� */ 
	c = m;
	a = y;
	if( m == 1 || m == 2 ) { 	/* 1���� 2���� ���⵵�� 13���� 14���� �ȴ�. */ 
		c+= 12;
		a -= 1;
	}
	/* Zeller�� ������ �̿��Ͽ� ���� �������� ���Ѵ�. */ 
	weekday = (21 * ( a/100))/4 + (5 * (a %100)) /4 + (26 * ( c+1))/10 + d - 1;
	printf("%d�� %d�� %d���� %s�����Դϴ�.\n\n", y, m, d, day[weekday%7]);
	return;
	/* ������ ���� ���� ���� return�� ���ų� return�� ��� �ȴ�.*/ 
}

/* �� ���� ����Ͽ� ����ϴ� �Լ��μ� return�� ���� �ٸ� ȭ�鿡 ��¸� �ϴ� �Լ� */ 
void one_month_cal(int y, int m) { /* y: ��, m:�� */ 
	int i, j=0, a, c, weekday, lastday; 
	/* a:�ӽó⵵, c:�ӽÿ�, weekday:���ϰ��� ���� */ 
	a=y;
	c=m;
	if ( m == 1 || m ==2 ) {
		a -= 1;
		c += 12;
	}

	/* Zeller�� �Լ��� �̿� �ſ� 1���� ���� �������� ��� */ 
	weekday = (21*(a/100))/4 + (5*(a%100))/4 + (26*(c+1))/10;
	weekday %= 7; /* 7�� ���� �������� ������ ��� */ 
	printf("%14d�� %d��\n\n", y, m);

	for(i=0; i<7; i++)
		printf("%4s", day[i]);
	printf("\n");

	/* �ſ� 1���� ���� �������� �˰�, �տ� �� ĭ�� ����� ���� ��� */ 
	for(i=0; i < weekday; i++, j++)
		printf("%4s", "");

	/* �� �ٿ� ����ϱ��� �μ��ϰ� ���� �ٷ� �ǳʰ��� ��� �μ� */ 
	lastday = last_day(y, m);
	for(i=1; i<=lastday; i++) {
		j++;
		printf("%4d", i);
		if(j==7) {
			printf("\n");
			j=0;
		}
	}
	printf("\n");
}

/* � ���� �������� ��ĥ���� ��� */ 
int last_day(int y, int m) /* y:��, m:�� */ 
{
	int dates_per_month[] = {29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if(m==2 && (y%400 == 0 || (y%100 != 0 && y%4 == 0)))
		m = 0;
	return( dates_per_month[m] );
}

/* ��Ȯ�� ��, ��, ���� �ԷµǾ����� �˻� */ 
int valid_date(int y, int m, int d) /* y:��, m:��, d:�� */ 
{
	if( m < 1 || m > 12 || d < 1 || d > 31 )
		return(0);
	if(m == 2) {
		if( (y%400==0 || (y%100!=0 && y%4==0)) && d <= 29)
			return(1);
		else if( !(y%400==0 || (y%100!=0 && y%4==0) ) && d<=28)
			return(1);
		else 
			return(0);
	}
	else {
		if( (m==4 || m==6 || m==9 || m==11) && d<=30 )
			return(1);
		else if( ( m==1 || m==3 || m==5 || m==7 ||
			m==8 || m==10 || m==12 ) && d<=31 )
			return(1);
		else 
			return(0);
	}
}
