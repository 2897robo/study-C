#include <stdio.h>
main()
{
	int i=31, bin[32] = {0, }, dec;
	printf("10진 양의 정수를 입력하시오 : ");
	scanf("%d", &dec);
 
	while(dec) {	// i는 31부터 거꾸로 저장한다.
		bin[i--] = dec & 1; // 나머지를 배열에 저장한다. i를 1감소한다.
		dec >>= 1; // 10진수를 2로 나눈다. 여기서는 shift연산을 이용했다.
	}

	for(i=0; i<32; i++) // 결과를 앞에서부터 출력한다.
		printf("%d", bin[i]);
	printf("\n");
}
