#include <stdio.h> 
#include <stdlib.h>

struct student {    // 구조체 정의 
	char *name; 
	int korean, english; 
}; 
int main()
{
	struct student *sp;	// 구조체 포인터 변수 선언 
	sp = (struct student*)malloc(sizeof(struct student)); //메모리 할당
	sp->name = "홍길동";	// 구조체 포인터 변수의 포인터 멤버
	sp->korean = 90;		// 데이터 대입 
	sp->english = 95;
	printf("이름: %s, 국어: %d, 영어: %d\n", 
		sp->name, sp->korean, sp->english); 
	free(sp);
}
