#include <stdio.h> 

struct book { 		// å�� ������ ������ ����ü ���� 
	char title[50]; 	// å ���� 
	char author[35]; 	// ���� 
	int pages; 	// ������ �� 
	int price; 	// ���� 
}; 

int main()
{
	struct book book1;		// ����ü ���� ���� 
	printf(" ���� ����(string) : "); 
	gets(book1.title);	// å ���� �Է�, ����ü�� ������� �׼��� ��� 
	printf(" ���ڸ�(string) : "); 
	gets(book1.author);		// ���� �Է� 
	printf(" ��ü ��������(int) : "); 
	scanf("%d", &book1.pages);	// å ������ �� �Է� 
	printf(" ����(int) : "); 
	scanf("%d", &book1.price); 	// å�� �Է� 

	// �Է� ���� ������ ���, ����ü�� ������� �׼����Ͽ� ���.  
	printf("%s, %s, %dp, %d��\n", book1.title, book1.author,
		 book1.pages, book1.price); 
}
