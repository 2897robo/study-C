#include <stdio.h>

int main()
{
	int twin, singleton;
	for(twin=1; twin<10; twin++)
		for(singleton=1; singleton<10; singleton++)
			if(twin*twin*singleton == 36)
				printf("%d, %d, %d\n", twin, twin, singleton); 
}
