/* strftime example */ 
#include <stdio.h>
#include <time.h>

int main ()
{
	printf("20194487 김기욱\n");
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];

	time ( &rawtime );
	timeinfo = localtime ( &rawtime );

	strftime (buffer,80,"현재 시간은 %I:%M%p.",timeinfo);
	puts (buffer);
	return 0;
}
