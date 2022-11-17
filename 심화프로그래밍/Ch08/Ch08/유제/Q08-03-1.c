#include <stdio.h> 
#include <math.h> 
double ArithmeticMean(double[], int); 
double GeometricMean(double[], int); 
double HarmonicMean(double[], int);

int main() {
	double array[10] = {0.1, 0.4, 0.7, 0.6, 0.4, 0.9, 0.4, 0.2, 0.4, 0.5}; 
	printf("산술평균은 %f 이다.\n",
	  ArithmeticMean(array,sizeof(array)/sizeof(array[0]))); 
	printf("기하평균은 %f 이다.\n",
	  GeometricMean(array,sizeof(array)/sizeof(array[0]))); 
	printf("조화평균은 %f 이다.\n",
	  HarmonicMean(array,sizeof(array)/sizeof(array[0]))); 
}

//산술평균 구하기
double ArithmeticMean(double array[], int num)
{ 
	int i; 
	double sum=0.0; 
	for (i=0; i<num; i++) 
		sum += array[i]; 
	return sum/num; 
} 

//기하평균 구하기
double GeometricMean(double array[], int num)
{ 
	int i; 
	double sum=0.0; 
	for (i=0; i<num; i++) 
		sum += log(array[i]); 
	return exp(sum/num); 
} 

//조화평균 구하기
double HarmonicMean(double array[], int num)
{ 
	int i; 
	double sum=0.0; 
	for (i=0; i<num; i++) 
		sum += (1/array[i]); 
	return (num/sum); 
} 
