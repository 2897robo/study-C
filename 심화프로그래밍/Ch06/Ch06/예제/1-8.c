#include <stdio.h> // barcode checker
int main()
{
	printf("20194487 ����");
//	int barcode[13] = {8,8,0,1,0,9,4,0,1,3,0,0,}; // 8801094013004
//	int barcode[13] = {8,8,0,9,0,1,0,6,6,5,0,0,}; // 8809010665009
	int barcode[13] = {5,3,9,1,5,1,9,8,9,0,6,0,}; // 5391519890608
//	int barcode[13] = {4,9,8,2,8,3,3,5,9,2,9,2,}; // 4982833592920
	int i, sum, tobe, x=0, y=0;
	
	printf("12�ڸ� �ڵ�: ");
	for(i=0; i<12; i+=2){	// 0���� 2�� �����ϸ鼭 ���� ���� 
		printf("%d %d ", barcode[i], barcode[i+1]);
		x += barcode[i];		// Ȧ�� ��° ���� �� 
		y += barcode[i+1];		// ¦�� ��° ���� �� 
	}
	y *= 3;	// ¦�� ��° ���� 3�� 
	tobe = sum = x + y;		// �� ���� ���� ������ ���� 
	printf("\n\n%d+%d = %d\n", x, y, sum);
	if (sum%10)			// 1�� �ڸ� ���� 0�� �ƴϸ�
		tobe = (sum/10 + 1)*10;		// �ø��Ͽ� 10�� ����� �ǵ��� �Ѵ�. 
	barcode[12] = tobe - sum;		// 10�� ����� �Ǳ� ���� �˻� �� ���� 
	printf("%d+%d=%d --> ", sum, barcode[12], tobe);
	printf("check number is %d.\n\n", barcode[12]);
	printf("12�ڸ�+�˻� ��: ");
	for(i=0; i<13; i++)				// ��ü ���ڵ� ��� 
		printf("%d ", barcode[i]);
	printf("\n");
}
