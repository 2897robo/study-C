#include <stdio.h> 
main()
{
	unsigned int index=0, dec=0;
	char binary[40];
	printf("2진수를 입력하시오(32자리 이하)\n");
	scanf("%[01]", binary);	// 0과 1이외의 값은 받아들이지 않는다. 

	printf("\n%s = ", binary);
	while (binary[index]) {
		dec += binary[index]-'0';
		if (binary[++index]) // 마지막 문자인지 검사
			dec <<= 1; // dec *= 2;
	}
	printf("%d\n", dec);
}
