#include <stdio.h> 
enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
typedef enum day wday; // 새로운 데이터 형 wday로 선언

int main()
{
	wday cnt;
	char* d_name[] = {"일", "월", "화", "수", "목", "금", "토"}; 
	for(cnt=sunday; cnt<=saturday; cnt++) //enum변수와 상수를 이용한 값의 이용
		printf("%s요일\n", d_name[cnt]);
}

