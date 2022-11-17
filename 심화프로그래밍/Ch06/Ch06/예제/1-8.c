#include <stdio.h> // barcode checker
int main()
{
	printf("20194487 김기욱");
//	int barcode[13] = {8,8,0,1,0,9,4,0,1,3,0,0,}; // 8801094013004
//	int barcode[13] = {8,8,0,9,0,1,0,6,6,5,0,0,}; // 8809010665009
	int barcode[13] = {5,3,9,1,5,1,9,8,9,0,6,0,}; // 5391519890608
//	int barcode[13] = {4,9,8,2,8,3,3,5,9,2,9,2,}; // 4982833592920
	int i, sum, tobe, x=0, y=0;
	
	printf("12자리 코드: ");
	for(i=0; i<12; i+=2){	// 0부터 2씩 증가하면서 루프 수행 
		printf("%d %d ", barcode[i], barcode[i+1]);
		x += barcode[i];		// 홀수 번째 수의 합 
		y += barcode[i+1];		// 짝수 번째 수의 합 
	}
	y *= 3;	// 짝수 번째 합의 3배 
	tobe = sum = x + y;		// 두 수의 합을 변수에 저장 
	printf("\n\n%d+%d = %d\n", x, y, sum);
	if (sum%10)			// 1의 자리 값이 0이 아니면
		tobe = (sum/10 + 1)*10;		// 올림하여 10의 배수가 되도록 한다. 
	barcode[12] = tobe - sum;		// 10의 배수가 되기 위한 검사 수 생성 
	printf("%d+%d=%d --> ", sum, barcode[12], tobe);
	printf("check number is %d.\n\n", barcode[12]);
	printf("12자리+검사 수: ");
	for(i=0; i<13; i++)				// 전체 바코드 출력 
		printf("%d ", barcode[i]);
	printf("\n");
}
