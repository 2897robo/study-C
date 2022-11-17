#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[30];
	unsigned char college:4;		// 단과대학(학부) : 4비트 : 16종류 
	unsigned char major:4;		// 학과(전공) : 4비트 : 16종류 
	unsigned char grade:3;		// 학년 : 3비트 
	unsigned char transfer:2;
		// 편입/전과 : 2비트 : 0:해당없음, 1:전과, 2:편입, 3:재입학 
	unsigned char state:3;		// 상태 : 3비트 : 0:신입학, 1:일반휴학, 
		// 2:군휴학, 3:복학, 4: 졸업, 5:수료, 6:자퇴, 7:제적 
	unsigned char credits:8; 		// 이수학점 : 8비트 
	unsigned char gender:1;		// 성별 : 1비트 ; 0:남자, 1:여자 
	unsigned char military:2;		// 군 : 2비트 : 0:면제, 1:미필, 2:군필 
	unsigned char region:5;		// 출신지역 : 5비트 : 32가지 
	       // 서울:0, 부산:1, 대구:2, 인천:3, 광주:4, 대전:5, 울산:6, 경기:7, 강원:8
	       // 충북:9, 충남:10, 전북:11, 전남:12, 경북:13, 경남:14, 제주:15, 기타:16 
};

typedef struct student student;
char *Col[] = {"법학", "인문", "사회과학", "경영", "자연과학", "간호", "공과", 
		"농업", "미술", "사범", "생활과학", "수의과", "약학", "음악", "의과"}; 
enum Collages {Law, Human, SSci, Busi, NSci, Nurs, Eng, Arg, Art, Edu,
		Home, Vet, Phar, Mus, Med };
char *Gender[] = {"남자", "여자"}; 
enum Genders {Male, Female }; 
char *State[] = {"입학", "일반휴학", "군휴학", "복학", "졸업", "수료", "자퇴", "제적"};
enum States {ADM, GA, MA, RI, GR, COMP, LEV, REM};
char *Mil[] = {"면제", "미필", "군필"}; 
enum Military {Na, Incomp, Veteran};
char *Trans[] = {"해당없음", "전과", "편입", "재입학"}; 
enum Transfers { NA, CM, SE, RE };

char *Region[] = {"서울특별시", "부산광역시", "대구광역시", "인천광역시", "광주광역시",
	    "대전광역시", "울산광역시", "경기도", "강원도",  "충청북도", "충청남도",
	    "전라북도", "전라남도", "경상북도", "경상남도", "제주특별자치도", "해외"}; 
enum Regions { Seoul, Busan, Daegu, Incheon, Gwangju, Daejeon, Ulsan, 
	Gyeonggi, Gangwon, Chungbuk, Chungnam, Jeonbuk, Jeonnam, 
	Gyeongbuk, Gyeongnam, Jeju, Etc};
enum Grades { Freshman=1, Sophomore, Junior, Senior, Graduation};

int main(void)
{
	student s = {"원대한", Phar, 3, Senior, NA, RI, 112, Male, Veteran, Seoul};

	printf("구조체 크기: %d\n\n",  sizeof(student));
	printf("%s : ", s.name);
	printf("%s대학, 전공:%u, %u학년, %s, %s\n",
	   Col[s.college], s.major, s.grade, Gender[s.gender], State[s.state]);
	printf("이수학점:%u, %s, 편입/전과:%s, 출신지역:%s\n", s.credits,
		Mil[s.military], Trans[s.transfer], Region[s.region]);
}
