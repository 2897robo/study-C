#include <stdio.h>
#define M 3
#define P 5
#define N 4

int main()
{
	double a[M][P]={{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3}};
	double b[P][N]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	double c[M][N], *p;
	int i, j, k;

	p = (double *)c;
	for(i=0; i<M; ++i)
		for(j=0; j<N; ++j) {
	 		*p = 0.0;
			for(k=0; k<P; ++k)
				*p += *(*a+i*P+j) * *(*b+i*N+j);
			p++;
		}
	p = (double *)c;
	for(i=0; i<M; ++i) {
		for(j=0; j<N; ++j)
			printf("%10.4f ", *p++);
		printf("\n");
	}
}
