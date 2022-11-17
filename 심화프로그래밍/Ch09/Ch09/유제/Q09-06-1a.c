#include <stdio.h>
#include <stdlib.h>

struct floats {	// �Ǽ��� �� �κк��� �����ϱ� ���� ��Ʈ�ʵ� ����ü
	unsigned int mantissa:23;		// little endian�̹Ƿ� �Ųٷ� ����
	unsigned int exp:8;		// ������ ���� ������ ����������
	unsigned int sign:1;		// ����� �ȵ�
};

typedef union int_or_float { 	// �� ������ �ڷḦ �ϳ��� ����ü�� ����
	int i;			// ���� : 32��Ʈ
	float f;			// �������е� �Ǽ� : 32��Ʈ
	struct floats fs;		// ��Ʈ�ʵ屸��ü : 32��Ʈ
} number;

char *CvtBinary(number);
void PrintBitField(number);

int main() {
	number n;

	n.i = 236523; 		// ���� ���� 
	printf("%10d -> %032s\n", n.i, CvtBinary(n));
		// 32�ڸ��� ����ϰ� ���� ���ڸ��� 0�� ����Ѵ�. 

	n.f = 12.34f; 		// �Ǽ� ���� 
	printf("%10.4f -> %032s\n", n.f, CvtBinary(n));
	PrintBitField(n);

	n.f = 1.0f; 		// �Ǽ� ���� 
	printf("%10.4f -> %032s\n", n.f, CvtBinary(n));
	PrintBitField(n);

	n.f = -1.75f; 		// �Ǽ� ���� 
	printf("%10.4f -> %032s\n", n.f, CvtBinary(n));
	PrintBitField(n);

	n.fs.exp = 254; // 32��Ʈ �ε��Ҽ����� ���� ū ��� 
	n.fs.sign = 0;
	n.fs.mantissa = 0x7fffff;
	printf("%14.4e -> %032s\n", n.f, CvtBinary(n));

	n.fs.sign = 1;  // 32��Ʈ �ε��Ҽ����� ���� ���� ���� 
	printf("%14.4e -> %032s\n", n.f, CvtBinary(n));

	n.fs.exp = 0;  // 32��Ʈ �ε��Ҽ����� 0�� ���� ����� ��� 
	n.fs.sign = 0;
	n.fs.mantissa = 1;
	printf("%14.4e -> %032s\n", n.f, CvtBinary(n));

	n.fs.sign = 1;  // 32��Ʈ �ε��Ҽ����� 0�� ���� ����� ���� 
	printf("%14.4e -> %032s\n", n.f, CvtBinary(n));
}

char *CvtBinary(number x) {	// ������ 2���� ���ڿ��� �ٲپ� ��ȯ��
	static char bin[33];
	itoa(x.i, bin, 2);
	return bin;
}

void PrintBitField(number x) {	// �� �κк��� �����
	char bin[33];
	printf("%10.4f -> ��ȣ:%1d, ", x.f, x.fs.sign); // ��ȣ ��� 
	itoa(x.fs.exp, bin, 2);		// ������ 2������ �ٲپ� ��� 
	printf("����:%08s, ", bin);
	itoa(x.fs.mantissa, bin, 2);		// ������ 2������ �ٲپ� ��� 
	printf("����:%023s\n", bin);
}
