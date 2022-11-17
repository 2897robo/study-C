#include <stdio.h>

int main()
{
	int stack[100] = {0, };
	int sp=99, data, i, location;
	
	while(1){
		printf("1. push\t2. pop\t3. print\t4.exit\n");
		scanf("%d", &i);
		switch(i){
			case 1:
				if( sp < 0)
					printf("stack overflow\n");
				else {
					printf("저장할 데이터 입력: ");
					scanf("%d", &data) ;
					stack[sp--] = data;
				}
				break;
			case 2:
				if( sp == 99)
					printf("stack empty!\n");
				else
					printf("data %d poped\n", stack[++sp]);
				break;
			case 3:
				if(sp == 99)
					printf("stack empty!\n");
				else
					for(location=sp+1; location<100; location++ )
						printf("%4d ", stack[location]);
					printf("\n");
				break;
		}
		if(i>=4 || i < 1)
			break;
	}
}
