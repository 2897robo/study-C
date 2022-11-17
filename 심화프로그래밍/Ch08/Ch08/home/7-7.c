// 파일 이름: main.c 
#include <stdio.h>
#include "funcs.c"
int main(){
	printf("20194487 김기욱\n");
	Func1();	// 이 함수는 정적 함수이므로 파일이 다르면 사용할 수 없다. 
	Func2();	// 이 함수는 정적 함수가 아니므로 사용할 수 있다. 
}
