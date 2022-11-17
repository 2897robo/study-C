#include <stdio.h> 
#include <string.h> 

typedef struct { 
	char name[20]; 
	int korean, english; 
} stud; // 구조체를 새로운 데이터 형 stud로 선언

char *search(stud *aa, char *name) { // 함수가 호출되기 전에 선언되어 있으면  
	// 함수원형을 따로 선언하지 않아도 된다.
	int i; 
	if ( strstr(aa->name, name) )
		return aa->name; 
 	else
 		return NULL;
}

int main()
{ 
	stud students[3]={ {"Hong Gil Dong", 95, 83},
		 	{"Park Gi Dong", 90, 78}, {"Kim Gi Joong", 79, 77}}; 
	char *name = "Dong", i; 
	char *result = (char *)malloc(50);

	for (i=0; i<3; i++)	// "Dong"이 포함된 이름을 모두 찾는다.
	{
		result = search(&students[i], name);
		if(result)
			printf("%s\n", result); 
	}
}
