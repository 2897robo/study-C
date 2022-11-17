// 파일 이름: main.c 
#include <stdio.h>
#include "funcs.c"
int main(){
	Func1();	// 이 함수는 정적 함수이므로 파일이 다르면 사용할 수 없다. 
	Func2();	// 이 함수는 정적 함수가 아니므로 사용할 수 있다. 
}
