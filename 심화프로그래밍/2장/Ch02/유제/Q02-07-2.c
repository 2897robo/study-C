#include <stdio.h>
int main()
{
    printf("���ڿ�:\n");
    const char* s = "Hello";
    printf("\t.%10s.\n\t.%-10s.\n\t.%*s.\n", s, s, 10, s);
 
    printf("����:\t%c %%\n", 65);
 
    printf("������\n");
    printf("10����:\t%i %d %.6i %i %.0i %+i %u\n", 1, 2, 3, 0, 0, 4, -1);
    printf("16����:\t%x %x %X %#x\n", 5, 10, 10, 6);
    printf(" 8����:\t%o %#o %#o\n", 10, 10, 4);
 
    printf("�ε��Ҽ�����\n");
    printf("�ݿø�:\t%f %.0f %.32f\n", 1.5, 1.5, 1.3);
    printf("ä���:\t%05.2f %.2f %5.2f\n", 1.5, 1.5, 1.5);
    printf("������ǥ��:\t%E %e\n", 1.5, 1.5);
    printf("16����:\t%a %A\n", 123.5, 1.5);
}
