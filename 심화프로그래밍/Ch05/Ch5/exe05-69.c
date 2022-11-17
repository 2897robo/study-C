#include <stdio.h>

int main()
{
	int car_no, tel_no, sum;
	int w, x, y, z;
	for(w = 3; w<10; w++)
		for(x = 2; x < 10; x++)
			for(y = 1; y < x; y++) {	// 둘째 수가 세 번째 수보다 큼(y<x까지만 반복 실행) 
				z = w - 2;		// 첫 번째 수가 마지막 수보다 2큼 
				car_no = w*1000 + x*100 + y*10 + z;		// 차번호 계산 
				tel_no = z*1000 + y*100 + x*10 + w;		// 전화번호(차번호의 역순) 계산 
				if(car_no + tel_no == 16456 && w != x && x != y) {// 차번호+전화번호 == 16456 인가? 
					printf("자동차 번호 = %d\n", car_no); 
				}
			}
}
