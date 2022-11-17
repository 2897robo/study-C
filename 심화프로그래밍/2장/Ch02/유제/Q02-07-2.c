#include <stdio.h>
int main()
{
    printf("문자열:\n");
    const char* s = "Hello";
    printf("\t.%10s.\n\t.%-10s.\n\t.%*s.\n", s, s, 10, s);
 
    printf("문자:\t%c %%\n", 65);
 
    printf("정수형\n");
    printf("10진수:\t%i %d %.6i %i %.0i %+i %u\n", 1, 2, 3, 0, 0, 4, -1);
    printf("16진수:\t%x %x %X %#x\n", 5, 10, 10, 6);
    printf(" 8진수:\t%o %#o %#o\n", 10, 10, 4);
 
    printf("부동소수점수\n");
    printf("반올림:\t%f %.0f %.32f\n", 1.5, 1.5, 1.3);
    printf("채우기:\t%05.2f %.2f %5.2f\n", 1.5, 1.5, 1.5);
    printf("과학적표기:\t%E %e\n", 1.5, 1.5);
    printf("16진수:\t%a %A\n", 123.5, 1.5);
}
