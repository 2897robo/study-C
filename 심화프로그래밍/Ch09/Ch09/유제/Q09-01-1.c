#include <stdio.h> 

struct student {		// 구조체 정의 
	char name[20];	// 이름 
	int ID_no, grade;	// 학번, 학년 
	char tel[20];	// 전화번호
	char email[30];	// 이메일 
}; 

int main()
{
	struct student mem[3]= { 
		{"김길동", 20072356, 3, "010-2345-6789", "kdhong@naver.com"}, 
		{"이수일", 20081234, 3, "011-9999-7727", "sllee@gmail.com"},
		{"하동욱", 20091557, 1, "010-9977-3345", "duha@nate.com"}};
		// 구조체 배열 선언 및 초기화 

	int i;
	for (i=0; i<3; i++) { // 구조체 배열의 내용 모두 출력
		printf("%s %d %d %s %s\n", mem[i].name, mem[i].ID_no, 
			mem[i].grade, mem[i].tel, mem[i].email);
	}
	printf("\n"); 
}
