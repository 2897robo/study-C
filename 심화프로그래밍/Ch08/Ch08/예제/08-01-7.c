#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#define MAXSIZE 200

int stack[MAXSIZE];
int top;	//index pointing to the top of stack

int main()
{
	void push(int);
 	void print();
	int pop();
	int will='1', i, num;

	while(will != '0') {
		printf("  주 메뉴:\t\t1. PUSH\t\t2. POP\t\t0. 종료\n메뉴 선택: ");
		will = getch();
		switch(will) {
			case '0':
				break;
			case '1':
				printf("PUSH할 데이터 입력 : ");
				scanf("%d",&num);
				push(num);
				break;
			case '2':
				i=pop();
				if(i != -999999)
					printf("\n......스택에서 Top에 있는 데이터 삭제: %d",i);
				break;
			default:
				printf("잘못된 선택. ");
		}
		print();
		printf("\n");
	} //end of  outer while
}               //end of main

void push(int y) {
	printf("%d ", y);
	if(top>MAXSIZE) {
		printf("....STACK FULL\n");
		return;
	}
	else {
		top++;
		stack[top]=y;
	}
}

int pop() {
	int a;
	if(top<=0) {
		printf("\n....STACK EMPTY: ");
		return -999999;
	}
	else{
		a=stack[top];
		top--;
 	}
	return(a);
}

void print() {
	int i, tmp;
	tmp = top;
	printf(" =>  ");
	for(; tmp > 0 ; tmp--)
		printf("%d ", stack[tmp]);
	printf("\n");
}
