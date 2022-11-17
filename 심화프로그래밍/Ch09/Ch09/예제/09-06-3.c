#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[30];
	unsigned char college:4;		// �ܰ�����(�к�) : 4��Ʈ : 16���� 
	unsigned char major:4;		// �а�(����) : 4��Ʈ : 16���� 
	unsigned char grade:3;		// �г� : 3��Ʈ 
	unsigned char transfer:2;
		// ����/���� : 2��Ʈ : 0:�ش����, 1:����, 2:����, 3:������ 
	unsigned char state:3;		// ���� : 3��Ʈ : 0:������, 1:�Ϲ�����, 
		// 2:������, 3:����, 4: ����, 5:����, 6:����, 7:���� 
	unsigned char credits:8; 		// �̼����� : 8��Ʈ 
	unsigned char gender:1;		// ���� : 1��Ʈ ; 0:����, 1:���� 
	unsigned char military:2;		// �� : 2��Ʈ : 0:����, 1:����, 2:���� 
	unsigned char region:5;		// ������� : 5��Ʈ : 32���� 
	       // ����:0, �λ�:1, �뱸:2, ��õ:3, ����:4, ����:5, ���:6, ���:7, ����:8
	       // ���:9, �泲:10, ����:11, ����:12, ���:13, �泲:14, ����:15, ��Ÿ:16 
};

typedef struct student student;
char *Col[] = {"����", "�ι�", "��ȸ����", "�濵", "�ڿ�����", "��ȣ", "����", 
		"���", "�̼�", "���", "��Ȱ����", "���ǰ�", "����", "����", "�ǰ�"}; 
enum Collages {Law, Human, SSci, Busi, NSci, Nurs, Eng, Arg, Art, Edu,
		Home, Vet, Phar, Mus, Med };
char *Gender[] = {"����", "����"}; 
enum Genders {Male, Female }; 
char *State[] = {"����", "�Ϲ�����", "������", "����", "����", "����", "����", "����"};
enum States {ADM, GA, MA, RI, GR, COMP, LEV, REM};
char *Mil[] = {"����", "����", "����"}; 
enum Military {Na, Incomp, Veteran};
char *Trans[] = {"�ش����", "����", "����", "������"}; 
enum Transfers { NA, CM, SE, RE };

char *Region[] = {"����Ư����", "�λ걤����", "�뱸������", "��õ������", "���ֱ�����",
	    "����������", "��걤����", "��⵵", "������",  "��û�ϵ�", "��û����",
	    "����ϵ�", "���󳲵�", "���ϵ�", "��󳲵�", "����Ư����ġ��", "�ؿ�"}; 
enum Regions { Seoul, Busan, Daegu, Incheon, Gwangju, Daejeon, Ulsan, 
	Gyeonggi, Gangwon, Chungbuk, Chungnam, Jeonbuk, Jeonnam, 
	Gyeongbuk, Gyeongnam, Jeju, Etc};
enum Grades { Freshman=1, Sophomore, Junior, Senior, Graduation};

int main(void)
{
	student s = {"������", Phar, 3, Senior, NA, RI, 112, Male, Veteran, Seoul};

	printf("����ü ũ��: %d\n\n",  sizeof(student));
	printf("%s : ", s.name);
	printf("%s����, ����:%u, %u�г�, %s, %s\n",
	   Col[s.college], s.major, s.grade, Gender[s.gender], State[s.state]);
	printf("�̼�����:%u, %s, ����/����:%s, �������:%s\n", s.credits,
		Mil[s.military], Trans[s.transfer], Region[s.region]);
}
