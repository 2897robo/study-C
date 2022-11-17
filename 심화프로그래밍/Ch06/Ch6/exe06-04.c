#include <stdio.h> 
#include <time.h>
int main()
{
	int scores[10] = {0, }, i;
	char grade[10][5];
	srand(time(0));

	for (i=0; i<10; i++)
		scores[i] = rand()%60 + 40;	// 40점 이상 100점 이하. 

	for(i=0; i<10; i++) {
		switch(scores[i] / 5 ) {
			case 20:
			case 19:
				strcpy(grade[i], "A+");
				break;
			case 18:
				strcpy(grade[i], "A");
				break;
			case 17:
				strcpy(grade[i], "B+");
				break;
			case 16:
				strcpy(grade[i], "B");
				break;
			case 15:
				strcpy(grade[i], "C+");
				break;
			case 14:
				strcpy(grade[i], "C");
				break;
			case 13:
				strcpy(grade[i], "D+");
				break;
			case 12:
				strcpy(grade[i], "D");
				break;
			default :
				strcpy(grade[i], "F");
		}
	}
	for( i =0; i<10; i++)
		printf("%d : %s\n", scores[i], grade[i]);
}
