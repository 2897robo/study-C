#include <windows.h>
#include <stdio.h>

__int64 GetMicroSecond()
{
	LARGE_INTEGER frequency;
	LARGE_INTEGER now;

	if ( !QueryPerformanceFrequency(&frequency) )
		return (__int64)GetTickCount();

	if ( !QueryPerformanceCounter(&now) )
		return (__int64)GetTickCount();

	return ((now.QuadPart) / (frequency.QuadPart/1000000));
}

int main( )
{
	__int64 tStart = 0;

	tStart = GetMicroSecond();
	Sleep(5);
	printf("elapsed time : %I64d microsec\n", GetMicroSecond() - tStart);
}
