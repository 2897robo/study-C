#include <stdio.h>
#include <stdarg.h>

int sum(int nargs, ...);

int main(void)
{
	int s1, s2;

	/* 1부터 5까지 더한 값을 s1에 저장. */ 
	s1 = sum(5, 1, 2, 3, 4, 5);

	printf("s1 = %d\n", s1);
	/* 100, 200, 300을 더한 값을 s2에 저장. */ 
	s2 = sum(3, 100, 200, 300);
	printf("s2 = %d\n", s2);
}

int sum(int nargs, ...)
{
	va_list argptr;
	int i, total = 0;

	va_start(argptr, nargs);        /* 가변 인자 처리 시작 */ 

	for (i = 0; i < nargs; i++)
		total += va_arg(argptr, int); /* 하나씩 가변 인자 얻기 */ 
	va_end(argptr);                 /* 가변 인자 처리 끝 */ 
	return total;
}
