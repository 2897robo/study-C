// ���׻� : ���� 10���� �� �߿��� �� ���� ���� �⺻ ������ 
// "����", "����", "����", "������", "���", "���", "�Ķ�", "����", "ȸ��", "���"
// Black, Brown, Red, Orange, Yellow, Green, Blue, Violet, Gray, White

// ������ : ���� 9���� �� �ϳ��� ������ 
// "����", "����", "���", "�Ķ�", "����", "ȸ��", "�ݻ�", "����", "����"
// Brown, Red, Green, Blue, Violet, Gray, Gold, Silver, None
#include <stdio.h>
#include <math.h>

int main()
{
	printf("20194487 ����");
      int x[4] = {0,}, i, j;
      double resistor;
      char *color[] = { "����", "����", "����", "������", "���", "���",
	  					"�Ķ�", "����", "ȸ��", "���" };
      char *tolerance_color[] = { "����", "����", "���", "�Ķ�", "����",
	  					"ȸ��", "�ݻ�", "����", "����"};
      double tolerance[] = { 1., 2., 0.5, 0.25, 0.1, 0.05, 5., 10., 20.};
      
      for(j=0; j<10; j++)
               printf("%d:%s  ", j, color[j]);

      printf("\n");
      for(i=1; i<4; i++) {
               printf("%d��° �� ���� : ", i);
               scanf("%d", &x[i-1]);
      } 

      // ���� �� ���� 
      printf("\n");
      for(j=0; j<9; j++)
               printf("%d:%s  ", j, tolerance_color[j]);
      printf("\n���� �� ����(0~8) : ");
      scanf("%d", &x[3]);

      printf("\n\n");
      for(i=0; i<3; i++)
               printf("%s ", color[ x[i] ]);
      printf("%s\n\n", tolerance_color[ x[3] ]);

      if( x[2] < 2) {
           resistor = (x[0]*10 + x[1]) * pow(10, x[2]);
           printf("%d ��", (int)resistor);
           }
      else if( x[2] < 5) {
           resistor = (x[0]*10 + x[1]) * pow(10, x[2]-3);
           printf("%.1f K��", resistor);
           }
      else if( x[2] < 8) {
           resistor = (x[0]*10 + x[1]) * pow(10, x[2]-6);
           printf("%.1f M��", resistor);
           }
      else {
           resistor = (x[0]*10 + x[1]) * pow(10, x[2]-9);
           printf("%.1f T��", resistor);
           }
      printf(" ���� %.2f%%\n", tolerance[x[3]]);
}
