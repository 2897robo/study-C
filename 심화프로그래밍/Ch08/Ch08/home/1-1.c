#include <stdio.h>
int NoOfDivisor(int);

int main()
{
	printf("20194487 김기욱\n");
 	int i;
 	for(i=1; i<=20; i++)
 		printf("%d의 약수의 개수 = %d\n", i, NoOfDivisor(i));
}

// 함수 정의, 함수의 데이터 형:int, 함수이름:NoOfDivisor, 매개변수: 하나의 int형
// 약수의 개수를 세어 그 수를 반환한다. n: 가인수
int NoOfDivisor(int n)
{
	int count=0, i;	// NoOfDivisor함수의 지역변수 선언
 	for(i=1; i<=n/2; i++)	// 1부터 n/2까지 검사하여 약수이면 카운트
 		if(n%i == 0)
 			count++;
	count++;		// 자기 자신 카운트
	return count;  // 결과반환, 반환 값의 데이터 형과 함수의 데이터 형은 같아야 한다.
}
