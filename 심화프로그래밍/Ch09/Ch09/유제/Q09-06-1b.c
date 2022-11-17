// Quiz 08-06-1b
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct doubles {	// �Ǽ��� �� �κк��� �����ϱ� ���� ��Ʈ�ʵ� ����ü
	unsigned int mantissa2;		// little endian�̹Ƿ� �Ųٷ� ����
	unsigned int mantissa1:20;		// little endian�̹Ƿ� �Ųٷ� ����
	unsigned int exp:11;		// ������ ���� ������ ����������
	unsigned int sign:1;		// ����� �ȵ�
};

typedef union int_or_float { 	// �� ������ �ڷḦ �ϳ��� ����ü�� ����
	double d;			// �������е� �Ǽ� : 32��Ʈ
	struct doubles dbf;		// ��Ʈ�ʵ屸��ü : 32��Ʈ
} number;

char *CvtBinary(number);
char *itob(unsigned int, int);

int main() {
	number n;

	n.d = -1.2; 		// �Ǽ� ���� 
	printf("%10.4f ->\n\t%s\n\n", n.d, CvtBinary(n));
	//PrintBitField(n);

	n.d = 1.0f; 		// �Ǽ� ���� 
	printf("%10.4f ->\n\t%s\n\n", n.d, CvtBinary(n));
	//PrintBitField(n);

	n.d = -1.75f; 		// �Ǽ� ����
	printf("%10.4f ->\n\t%s\n\n", n.d, CvtBinary(n));
	//PrintBitField(n);

	// 64��Ʈ �ε��Ҽ����� ���� ū ��� 
	n.dbf.sign = 0;
	n.dbf.exp = 2046;	// ������ ���� ū ��, ���̾ 1023, 2�� 1023�� 
	n.dbf.mantissa1 = 0xfffff; // 20��Ʈ 1 
	n.dbf.mantissa2 = 0xffffffff; // 32��Ʈ 1 
	printf("%14.4e ->\n\t%s\n\n", n.d, CvtBinary(n));

	// 64��Ʈ �ε��Ҽ����� ���� ���� ���� 
	n.dbf.sign = 1;
	printf("%14.4e ->\n\t%s\n\n", n.d, CvtBinary(n));

	// 64��Ʈ �ε��Ҽ����� 0�� ���� ����� ��� 
	n.dbf.sign = 0;
	n.dbf.exp = 0;	// ������ ���� ���� ��, 2�� -1023�� 
	n.dbf.mantissa1 = 0;
	n.dbf.mantissa2 = 1;
	printf("%14.4e ->\n\t%s\n\n", n.d, CvtBinary(n));

	// 64��Ʈ �ε��Ҽ����� 0�� ���� ����� ���� 
	n.dbf.sign = 1;
	printf("%14.4e ->\n\t%s\n\n", n.d, CvtBinary(n));

	// 64��Ʈ �ε��Ҽ���
	n.dbf.sign = 0;
	n.dbf.exp = 0;	// ������ ���� ���� ��, 2�� -1023�� 
	n.dbf.mantissa1 = 0x80000; // 0.1
	n.dbf.mantissa2 = 0;
	printf("%14.4e ->\n\t%s\n\n", n.d, CvtBinary(n));

	// 64��Ʈ �ε��Ҽ��� 
	n.dbf.sign = 0;
	n.dbf.exp = 1;	// ������ ���� ���� ��, 2�� -1022��
	n.dbf.mantissa1 = 0; // 1.0
	n.dbf.mantissa2 = 0;
	printf("%14.4e ->\n\t%s\n\n", n.d, CvtBinary(n));

	system("PAUSE");
	return 1;
}

char *CvtBinary(number x) {	// ������ 2���� ���ڿ��� �ٲپ� ��ȯ��
	static char bin[70];
	static char *temp;

	// ��ȣ�� 2���� ���ڿ��� 
	x.dbf.sign ? strcpy(bin, "1 ") : strcpy(bin, "0 ");

	temp = itob(x.dbf.exp, 11);	// ������ 2���� ���ڿ��� 
	strcat(bin, temp);
	strcat(bin, " ");

	temp = itob(x.dbf.mantissa1, 20);	// ���� �� 20��Ʈ�� 2���� ���ڿ��� 
	strcat(bin, temp);

	temp = itob(x.dbf.mantissa2, 32);	// ���� �� 32��Ʈ�� 2���� ���ڿ���
	strcat(bin, temp);
	return bin;
}

// ������ 2���� ���ڿ��� ��ȯ�ϴ� �Լ� 
char *itob(unsigned int n, int digit) // n:��ȯ�� ��, digit:�ڸ� �� 
{
	static char bin[65];
	bin[digit]=0;	// null, �� ������ �ڸ� 
	while(digit) {
		digit--;
		bin[digit] = n%2 + '0'; // ����ȭ
		n /= 2;
	}
	return bin;
}
