#include <stdio.h>
#include <stdarg.h>

int sum(int nargs, ...);

int main(void)
{
	int s1, s2;

	/* 1���� 5���� ���� ���� s1�� ����. */ 
	s1 = sum(5, 1, 2, 3, 4, 5);

	printf("s1 = %d\n", s1);
	/* 100, 200, 300�� ���� ���� s2�� ����. */ 
	s2 = sum(3, 100, 200, 300);
	printf("s2 = %d\n", s2);
}

int sum(int nargs, ...)
{
	va_list argptr;
	int i, total = 0;

	va_start(argptr, nargs);        /* ���� ���� ó�� ���� */ 

	for (i = 0; i < nargs; i++)
		total += va_arg(argptr, int); /* �ϳ��� ���� ���� ��� */ 
	va_end(argptr);                 /* ���� ���� ó�� �� */ 
	return total;
}
