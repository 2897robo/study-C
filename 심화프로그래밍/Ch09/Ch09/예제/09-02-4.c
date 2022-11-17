#include <stdio.h> 
#include <string.h> 

typedef struct { 
	char name[20]; 
	int korean, english; 
} stud; // ����ü�� ���ο� ������ �� stud�� ����

char *search(stud *aa, char *name) { // �Լ��� ȣ��Ǳ� ���� ����Ǿ� ������  
	// �Լ������� ���� �������� �ʾƵ� �ȴ�.
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

	for (i=0; i<3; i++)	// "Dong"�� ���Ե� �̸��� ��� ã�´�.
	{
		result = search(&students[i], name);
		if(result)
			printf("%s\n", result); 
	}
}
