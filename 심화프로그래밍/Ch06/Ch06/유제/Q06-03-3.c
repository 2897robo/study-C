#include <stdio.h> 
main()
{
	unsigned int index=0, dec=0;
	char binary[40];
	printf("2������ �Է��Ͻÿ�(32�ڸ� ����)\n");
	scanf("%[01]", binary);	// 0�� 1�̿��� ���� �޾Ƶ����� �ʴ´�. 

	printf("\n%s = ", binary);
	while (binary[index]) {
		dec += binary[index]-'0';
		if (binary[++index]) // ������ �������� �˻�
			dec <<= 1; // dec *= 2;
	}
	printf("%d\n", dec);
}
