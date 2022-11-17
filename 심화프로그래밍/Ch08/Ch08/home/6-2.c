#include <stdio.h>
int main(int argc, char* argv[]) 
{ 
	printf("20194487 김기욱\n");
	unsigned int i, dec=0; 
	if (argc !=2) {
		printf("사용방법 : \n\t mainargs 16진수\n"); 
		return 0; 
	} 
	sscanf(argv[1], "%x", &dec); //16진수를 읽음
	
	printf("16진수 %s의 10진수 값은 %d이다.\n", argv[1], dec); 
}
