#include <stdio.h> 

enum light {IR, red, orange, yellow, green, cyan, blue, violet, UV};
typedef enum light rainbow; 
char* name[] = {"���ܼ�", "����", "��Ȳ", "���", "�ʷ�", "�Ķ�",
				 "����", "����", "�ڿܼ�"}; 
int wavelength[] = {780, 680, 640, 600, 560, 480, 440, 420, 380};

int main() {
	int i;
	for(i=IR; i<=UV; i++)
		printf("%d: %s: �� %d nano-meter\n", i, name[i], wavelength[i]);
}
