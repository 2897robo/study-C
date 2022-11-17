#include <stdio.h> 
#include <stdlib.h> 

struct student {    // 구조체 정의 
	char *name; 	// 구조체 멤버로 포인터 선언
	int korean; 
	int english; 
}; 

int main()
{
	struct student kdhong;		// 구조체 변수 kdhong 선언 
	struct student *sp = &kdhong;	// 구조체 포인터 변수 선언 

	sp->name = "홍길동";	// 구조체 포인터 변수의 멤버 액세스
	sp->korean = 90;		// 데이터 대입 
	(*sp).english = 95;	// 직접 액세스는 (*구조체 포인터 변수).멤버 

	printf("이름 : %s\n", sp->name); 
	printf("국어 : %d\n", sp->korean); 
	printf("영어 : %d\n", sp->english); 
}
