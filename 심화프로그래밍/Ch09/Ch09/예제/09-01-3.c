#include <stdio.h> 
#include <string.h> 

struct member {		// 구조체 정의 
	char name[20];	// 이름 
	char gender;	// 성별 : 'M', 'F'로 지정 
	int age;		// 나이 
	char level[20];	// 직위 
}; 

int main()
{
	struct member members[5]= { {"홍길동", 'M', 49, "사장"}, 
		{"이몽룡", 'M', 25, "사원"}, {"임꺽정", 'M', 39, "부장"}, 
		{"유관순", 'F', 28, "과장"}, {"김유신", 'M', 43, "이사"}};
		// 구조체 배열 선언 및 초기화 
	int i;
	char name[20];

	for (i=0; i<5; i++) { // 40세 이상의 남자 모두 찾기 
		if (members[i].gender == 'M' && members[i].age > 40) 
			printf("이름 : %s \n직위 : %s\n",
			    members[i].name, members[i].level);
	}
	printf("\n"); 

	printf("검색할 직원 이름 입력 : ");	// 찾고자 하는 직원 이름 입력 
	scanf("%s", name); 
	for (i=0; i<5; i++) {		// 해당되는 직원 검색 및 출력 
		if (strcmp(members[i].name, name) == 0)
		     printf("이름 : %s \n직위 : %s\n나이 : %d\n",
		     members[i].name, members[i].level, members[i].age); 
	}
}
