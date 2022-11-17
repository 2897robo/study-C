#include <stdio.h>
int main()
{
	int i=100, *j;
	j = &i;	// i의 주소를 j에 저장 
	printf("    %%d--->>%d<<\n", 123);
	printf("  %%+5d--->>%+5d<<\n", 345);
	printf("  %%05d--->>%05d<<\n", 345);
	printf("  %%13u--->>%13u<<\n", -1);
	printf("   %%0d--->>%0d<<\n", 567);
	printf("  %%05x--->>%05x<<\n", 507);
	printf("   %%5x--->>%5x<<\n", 507);
	printf("  %%#5x--->>%#5x<<\n", 507);
	printf("   %%6o--->>%6o<<\n", 507);
	printf("  %%#6o--->>%#6o<<\n", 507);
	printf("   %%0x--->>%0x<<\n", 507);
	printf("  %%-5d--->>%-5d<<\n", 678);
	printf(" %%6.1f--->>%6.1f<<\n", 789.38);
	printf("%%10.1e--->>%10.1e<<\n", 789.38);
	printf(" %%7.1f--->>%7.1f<<\n", 789.45);
	printf("    %%p--->>%p<<\n", j);
	printf("  %%20s--->>%20s<<\n", "abcdefg789.45");
	printf("  %%25s--->>%25s<<\n", "Korean team fighting!!!");
	printf(" %%6.1x--->>%6.1x<<\n", 345);
}
