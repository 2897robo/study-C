#include <stdio.h>

void itoa(int , char *, int );

int main()
{
	printf("20194487 ����\n");
	int dec;
	char bin[33];
	
	printf("%5s|%5s |%5s |%9s\n", "10��", "16��", "8��", "2��");
	for(dec = 0; dec < 256; dec++) { // 0���� 255���� �� �������� ��ȯ
		itoa(dec, bin, 2);		// dec�� 2������ �ٲپ� bin�� ���� 
		printf("%4d | 0x%02X | %04o | %08s\n", dec, dec, dec, bin);
	}
}

void itoa(int x, char *b, int r)
{
	char *radix = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *sp, *ep;
	if( r < 2 || r > 36)
		printf("Error, itoa()'s 3rd argument is greater than 2 "
			"and less than 36");
	if( x == 0) {
		*b = '0';
		*++b = '\0';
		return;
	}
	ep = b;
	while(x) {	// ������ ����Ͽ� ���ڿ� b�� �����ϱ� 
		*ep = *(radix + x%r); // ���������� �ش�Ǵ� ���ڸ� ã�Ƽ� ���� 
		x /= r;		// �� ��� 
		ep++;		// ������ �ϳ� ���� 
	}
	*ep = '\0';		// ���� �� ���� ���� 
	ep--;			// NULL ������ ������ �̵� 
	sp = b;			// sp�� b�� ù ��° �ּҷ� ���� 
	while(sp < ep) {		// ���ڿ� �Ųٷ� �����
		*sp ^= *ep;	// ���ڿ� ��ġ �ٲٱ� 
		*ep ^= *sp;
		*sp ^= *ep;
		sp++;		// ù ������ ���� 
		ep--;		// ������ ������ ���� 
	}
}
