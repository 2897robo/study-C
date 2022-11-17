#include <stdio.h> 

struct Course {			// 구조체 정의 
	char ClassName[30];	// 교과목 명 
	int ClassNo;		// 교과목 번호 
	char Classify[10];	// 강의 형태:이론 or 실습 
	int Restrict;		// 수강 제한 인원 
}; 

int main()
{
	struct Course crs[5]= { 		// 구조체 배열 선언 및 초기화 
		{"C언어", 100101, "실습", 40}, 
		{"JAVA", 100102, "실습", 40}, 
		{"디지털 논리회로", 100103, "이론", 50}, 
		{"컴퓨터구조론", 100104, "이론", 60}, 
		{"Microprocessor", 100105, "이론+실습", 30}};
	int i;

	for (i=0; i<5; i++) { // 구조체 배열의 내용 모두 출력
		printf("%-25s %6d %-10s %5d명\n", crs[i].ClassName,
			crs[i].ClassNo, crs[i].Classify, crs[i].Restrict);
	}
	printf("\n"); 
}
