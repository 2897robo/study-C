#include <stdio.h>

int main()
{
	int cheolsoo, younghee;

	for (cheolsoo=1; cheolsoo <10; cheolsoo++)
		for (younghee=1; younghee < 10; younghee++)
			if (cheolsoo - 1 == younghee + 1 && cheolsoo + 1 == (younghee-1)*2) {
				printf("Ã¶¼ö = %d, ¿µÈñ = %d\n", cheolsoo, younghee);
				break;
			}
}
