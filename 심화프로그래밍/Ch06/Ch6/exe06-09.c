#include <stdio.h>

int main()
{
	int ant[1000] = {1, 0,}, ant2[1000]={0,};
	int cnt, index=0, i, a=0, b=0, element=0;

	for(element=0; element < 10; element++) {
		i=0;
		while(ant[i]!=0) {		// ���̼��� ����ϴ� �κ� 
			printf("%2d ", ant[i]);
			i++;
		}
		a=b=0;
		while(ant[a] != 0) {	// �� ���·κ��� ���� ������ ���̼��� ���� 
			cnt = 0;			// ant2�迭�� �ӽ÷� ������ ���̼����� �����Ѵ�. 
			ant2[b]=ant[a];
			index = ant[a];
			while(index == ant[a]) { // ���̼������� ���ӵǴ� ���� ���� ���ο� ���̼��� ���� 
				++cnt;
				++a;
			}
			ant2[++b] = cnt;
			++b;
		}
		for(i=0; i<=b; i++)	// ������ ���̼����� �ٽ� �� ���·� �����ϴ� �κ� 
			ant[i] = ant2[i];
		printf("\n");
	}
}
