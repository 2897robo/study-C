#include <stdio.h>

int main()
{ 
	float thick = 0.0001, dist = 1.5e11;   /* 1.5 * 10�� 11�� */ 
	int x=0; 

	for (;;) {        /* �����ݷ� �ΰ��� ���� ������ �ȴ�. */ 
		x++; 
		thick *=2; 
		if(thick >= dist)
			break;
		/* ���� ������ �� �������� �� �ִ� �������� �־�� �Ѵ�. */ 
	}
	printf("count = %d, thick = %f\n", x, thick); 
}

