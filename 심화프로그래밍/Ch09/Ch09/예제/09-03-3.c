#include <stdio.h>

typedef enum { Seoul, Busan, Daegu, Incheon, Gwangju, Daejeon, Ulsan,	Gyeonggi, Gangwon, Chungbuk, Chungnam, Jeonbuk, Jeonnam,
	Gyeongbuk, Gyeongnam, Jeju, Etc
	} Regions;

char * NameEng[] = { "Seoul", "Busan", "Daegu", "Incheon", "Gwangju", 
	"Daejeon", "Ulsan", "Gyeonggi", "Gangwon", "Chungbuk", "Chungnam",
	"Jeonbuk", "Jeonnam", "Gyeongbuk", "Gyeongnam", "Jeju", "Etc"};

char * NameKor[] = {"서울특별시", "부산광역시", "대구광역시", "인천광역시",
	"광주광역시", "대전광역시", "울산광역시", "경기도", "강원도",  "충청북도",
	"충청남도", "전라북도", "전라남도", "경상북도", "경상남도", "제주특별자치도",
	"해외"}; 

int main(void)
{
	Regions r;	// 열거형 변수 선언

	for(r=Seoul; r<=Etc; r++)
		printf("%s: %s\n", NameKor[r], NameEng[r]);

}
