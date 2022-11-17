#include <stdio.h>

typedef enum { Seoul, Busan, Daegu, Incheon, Gwangju, Daejeon, Ulsan,	Gyeonggi, Gangwon, Chungbuk, Chungnam, Jeonbuk, Jeonnam,
	Gyeongbuk, Gyeongnam, Jeju, Etc
	} Regions;

char * NameEng[] = { "Seoul", "Busan", "Daegu", "Incheon", "Gwangju", 
	"Daejeon", "Ulsan", "Gyeonggi", "Gangwon", "Chungbuk", "Chungnam",
	"Jeonbuk", "Jeonnam", "Gyeongbuk", "Gyeongnam", "Jeju", "Etc"};

char * NameKor[] = {"����Ư����", "�λ걤����", "�뱸������", "��õ������",
	"���ֱ�����", "����������", "��걤����", "��⵵", "������",  "��û�ϵ�",
	"��û����", "����ϵ�", "���󳲵�", "���ϵ�", "��󳲵�", "����Ư����ġ��",
	"�ؿ�"}; 

int main(void)
{
	Regions r;	// ������ ���� ����

	for(r=Seoul; r<=Etc; r++)
		printf("%s: %s\n", NameKor[r], NameEng[r]);

}
