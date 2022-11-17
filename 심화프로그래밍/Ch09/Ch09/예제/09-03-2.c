#include <stdio.h> 

// 초깃값이 없으므로 0~7까지 변수 값이 대입된다. 
enum day {sun, mon, tue, wed, thu, fri, sat};
typedef enum day day; 
char* day_name[] = {"일", "월", "화", "수", "목", "금", "토"}; 

day tomorrow(day d) { // 내일의 요일 찾기 
	return ((day)(((int)d+1)%7)); // 정확하게 제어를 해 주어야 한다.
} 

day yesterday(day d) { // 어제의 요일 찾기 
	return ((day)(((int)d+6)%7)); // 정확하게 제어를 해 주어야 한다.
} 

int main()
{
	day today=sun; // 오늘은 일요일 
	printf("어제는 %s요일\n", day_name[yesterday(today)] ); 
	printf("오늘은 %s요일\n", day_name[today] );
	printf("내일은 %s요일\n", day_name[tomorrow(today)] ); 
}
