#include <stdio.h>
int main(int argc, char* argv[]) 
{ 
	printf("20194487 ����\n");
	unsigned int i, dec=0; 
	if (argc !=2) {
		printf("����� : \n\t mainargs 16����\n"); 
		return 0; 
	} 
	sscanf(argv[1], "%x", &dec); //16������ ����
	
	printf("16���� %s�� 10���� ���� %d�̴�.\n", argv[1], dec); 
}
