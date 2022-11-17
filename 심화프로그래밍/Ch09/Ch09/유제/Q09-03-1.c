#include <stdio.h> 

enum light {IR, red, orange, yellow, green, cyan, blue, violet, UV};
typedef enum light rainbow; 
char* name[] = {"적외선", "빨강", "주황", "노랑", "초록", "파랑",
				 "남색", "보라", "자외선"}; 
int wavelength[] = {780, 680, 640, 600, 560, 480, 440, 420, 380};

int main() {
	int i;
	for(i=IR; i<=UV; i++)
		printf("%d: %s: 약 %d nano-meter\n", i, name[i], wavelength[i]);
}
