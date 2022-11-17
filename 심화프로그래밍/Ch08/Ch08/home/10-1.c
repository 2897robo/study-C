/* mktime example: weekday calculator */ 
#include <stdio.h>
#include <time.h>

int main ()
{
	printf("20194487 ����\n");
	time_t rawtime, user_time;
	struct tm * timeinfo;
	int year, month ,day;
	char * weekday[] = { "�Ͽ���", "������", "ȭ����", "������", "�����", "�ݿ���", "�����"};
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	printf("������ %d�� %d�� %d�� %s�Դϴ�\n", 1900+timeinfo->tm_year, 1+timeinfo->tm_mon,
			timeinfo->tm_mday, weekday[timeinfo->tm_wday]); 
	printf ( "%s", asctime(timeinfo) );
	printf ( "%s", asctime(gmtime(&rawtime )));
	printf ( "%s", ctime (&rawtime) ); // printf ( "%s", asctime(localtime(&rawtime)));

	/* ����ڰ� �����ϴ� ��¥�� �Է¹޴´�. */ 
	printf("\n��/��/�� : ");
	scanf("%d%*c%d%*c%d", &year, &month, &day); 

	/* ���� �ð��� ��� ����ڰ� ������ �ð����� �ٲ۴�. */ 
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	timeinfo->tm_year = year - 1900;	// ����ڰ� �Է��� �⵵�� �����Ѵ�.
	timeinfo->tm_mon = month - 1;		// ������� �Է��� ���� �����Ѵ�.
	timeinfo->tm_mday = day;			// ����ڰ� �Է��� ���� �����Ѵ�.

	/* mktime�Լ��� �̿��Ͽ� �ð��� ���� �����. */  
	user_time = mktime ( timeinfo );
	printf ("%d�� %d�� %d���� %s�Դϴ�.\n", year, month, day, weekday[timeinfo->tm_wday]);
}

/* time.h�� ���ǵǾ� �ִ� tm ����ü
struct tm 
{ 
	int	tm_sec;	-- ��: 0-59 (K&R says 0-61?) 
	int	tm_min;	-- ��: 0-59 
	int	tm_hour;	-- 24�ð� ǥ�� : 0-23 
	int	tm_mday;	-- �� : 1-31 
	int	tm_mon;	-- �� : january: 0-11  
	int	tm_year;	-- �� : Years since 1900 
	int	tm_wday;	-- ���� : Days since Sunday (0-6) 
	int	tm_yday;	-- �� ���� 1�� 1�� ���� ���ڼ� : 0-365 
	int	tm_isdst;	-- ���Ÿ�� ���� : +1 Daylight Savings Time, 0 No DST, -1 don't know 
}; 
*/ 
