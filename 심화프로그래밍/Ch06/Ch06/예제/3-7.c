// 저항색 : 다음 10가지 색 중에서 세 가지 색이 기본 지정됨 
// "검정", "갈색", "빨강", "오렌지", "노랑", "녹색", "파랑", "보라", "회색", "흰색"
// Black, Brown, Red, Orange, Yellow, Green, Blue, Violet, Gray, White

// 오차색 : 다음 9가지 중 하나가 지정됨 
// "갈색", "빨강", "녹색", "파랑", "보라", "회색", "금색", "은색", "없음"
// Brown, Red, Green, Blue, Violet, Gray, Gold, Silver, None
#include <stdio.h>
#include <math.h>

int main()
{
	printf("20194487 김기욱");
      int x[4] = {0,}, i, j;
      double resistor;
      char *color[] = { "검정", "갈색", "빨강", "오렌지", "노랑", "녹색",
	  					"파랑", "보라", "회색", "흰색" };
      char *tolerance_color[] = { "갈색", "빨강", "녹색", "파랑", "보라",
	  					"회색", "금색", "은색", "없음"};
      double tolerance[] = { 1., 2., 0.5, 0.25, 0.1, 0.05, 5., 10., 20.};
      
      for(j=0; j<10; j++)
               printf("%d:%s  ", j, color[j]);

      printf("\n");
      for(i=1; i<4; i++) {
               printf("%d번째 색 선택 : ", i);
               scanf("%d", &x[i-1]);
      } 

      // 오차 색 선택 
      printf("\n");
      for(j=0; j<9; j++)
               printf("%d:%s  ", j, tolerance_color[j]);
      printf("\n오차 색 선택(0~8) : ");
      scanf("%d", &x[3]);

      printf("\n\n");
      for(i=0; i<3; i++)
               printf("%s ", color[ x[i] ]);
      printf("%s\n\n", tolerance_color[ x[3] ]);

      if( x[2] < 2) {
           resistor = (x[0]*10 + x[1]) * pow(10, x[2]);
           printf("%d Ω", (int)resistor);
           }
      else if( x[2] < 5) {
           resistor = (x[0]*10 + x[1]) * pow(10, x[2]-3);
           printf("%.1f KΩ", resistor);
           }
      else if( x[2] < 8) {
           resistor = (x[0]*10 + x[1]) * pow(10, x[2]-6);
           printf("%.1f MΩ", resistor);
           }
      else {
           resistor = (x[0]*10 + x[1]) * pow(10, x[2]-9);
           printf("%.1f TΩ", resistor);
           }
      printf(" 오차 %.2f%%\n", tolerance[x[3]]);
}
