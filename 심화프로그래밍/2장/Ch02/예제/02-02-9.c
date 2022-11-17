#include <stdio.h>
int main()
{
     float x = 3.14159f;
     long long y = 54684569654653215LL;
     long double z = 98765431212.341E+1293L;
     printf("float : %f\n", x);
     printf("long long : %I64d\n", y);
     printf("long double : %Le\n", z);
}
