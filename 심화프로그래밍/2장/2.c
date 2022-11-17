#include <stdio.h>

int main()
{
    double a=149597879, b=299792.458;
    
    int tim, m, s;
    
    tim = a/b;
    m = tim/60;
    s = tim%60;
    
    printf("%d, %d", m, s);
}
