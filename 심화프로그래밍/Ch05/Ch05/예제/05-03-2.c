#include <stdio.h>
int main()
{
	int number, sum;
	printf(" 숫자를 입력하시오: ");
	scanf("%d", &number);
	while(number>10) {		// 한자리수가 될 때까지 반복하는 루프
		sum = 0;			// 각 자리수의 합을 저장할 변수
		while(number != 0) {	// 각 자리수를 하나씩 누적하는 루프
			sum += number % 10;	// 맨 뒷자리를 더한다.
			number /= 10;		// 10진수 값을 한자리 오른쪽으로 이동한다.
		}
		number = sum;
		printf("==> %d ", number);
	}
	printf("결과:%d\n", number);		// 한자리수가 되면 여기로 와서 출력한다.
}
