#include <stdio.h> 
enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
typedef enum day wday; // ���ο� ������ �� wday�� ����

int main()
{
	wday cnt;
	char* d_name[] = {"��", "��", "ȭ", "��", "��", "��", "��"}; 
	for(cnt=sunday; cnt<=saturday; cnt++) //enum������ ����� �̿��� ���� �̿�
		printf("%s����\n", d_name[cnt]);
}

