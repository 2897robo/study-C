#include <stdio.h>

int main() {
	int i, j, a[]={1,3,5,7,9,10}, b[]={2,4,5,6,14,15,20,40,60,66,69}; 
	// ���ĵ� �� �迭 a, b 
	int a_position=0, b_position=0, c_position=0;
	int loop_size, size_a, size_b, c[30];	// c�� ��� ���� ����� �迭 

	size_a = sizeof(a)/sizeof(int);	// a �迭�� ũ�� ��� 
	size_b = sizeof(b)/sizeof(int);	// b �迭�� ũ�� ��� 
	loop_size = size_a + size_b;	// a, b �� �迭�� ���� ũ�� 
	for(c_position=0; c_position<loop_size; c_position++) {
		// ���������迭�̹Ƿ� ���� ���� ���� c�迭�� �����Ѵ�.
		if( a[a_position] < b[b_position])
			c[c_position] = a[a_position++];
		else 
			c[c_position] = b[b_position++];
		// a�迭�� ��� ����Ǿ����� �˻��Ͽ� ��� ����Ǿ��ٸ�, 
		if( a_position > size_a) {
			a_position--;
			break;		// ������ ����������. 
		}
		// b�迭�� ��� ����Ǿ����� �˻��Ͽ� ��� ����Ǿ��ٸ�, 
		else if(b_position > size_b) {
			b_position--;
			break;		// ������ ����������. 
		}
	}

	if(b_position < size_b)		// b�迭�� ���� �ִٸ� 
		for(i=b_position; i<size_b; i++)	//��� c�迭�� �����Ѵ�. 
			c[c_position++] = b[b_position++];

	else if(a_position < size_a)	// a�迭�� ���� �ִٸ� 
		for(i=a_position; i<size_a; i++)	//��� c�迭�� �����Ѵ�. 
			c[c_position++] = a[a_position++];
	
	for(i=0; i<loop_size; i++)	// ����� ����Ѵ�. 
		printf("%d  ", c[i]);
	printf("\n");
}
