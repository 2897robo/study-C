#include <stdio.h> 
int main()
{
	printf("20194487 ����");
	int i, j, size, temp; 
	int stud[] = {45, 92, 88, 34, 88, 95, 82, 59, 20, 45, 60, 76}; // �迭 �ʱ�ȭ

	//�迭�� ������ �� �� ������ �˾Ƴ��� ���
	size = sizeof(stud)/sizeof(stud[0]);
	printf("Before sort : ");
	for(i=0; i<size; i++)
		printf("%d ", stud[i]);
	printf("\n");
	// �� ���� �ݺ� ���Ͽ� ũ������� �����Ѵ�. 
	for (i=0; i<size-1; i++) {
		for (j=i+1; j<size; j++) { 
			if(stud[i] < stud[j]) {	// �迭�� ���Ͽ� ������ �ٲ۴�.
				stud[i] ^= stud[j];
				stud[j] ^= stud[i];
				stud[i] ^= stud[j];
			}
		}
	}
	printf("Sorted : "); // ���ĵ� ��� ���
	for (i=0; i<size; i++)
		printf("%d ", stud[i]); 
}
