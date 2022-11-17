#include <stdio.h> 
#include <math.h> 
double ArithmeticMean(double[], int); 
double GeometricMean(double[], int); 
double HarmonicMean(double[], int);

int main() {
	double array[10] = {0.1, 0.4, 0.7, 0.6, 0.4, 0.9, 0.4, 0.2, 0.4, 0.5}; 
	printf("�������� %f �̴�.\n",
	  ArithmeticMean(array,sizeof(array)/sizeof(array[0]))); 
	printf("��������� %f �̴�.\n",
	  GeometricMean(array,sizeof(array)/sizeof(array[0]))); 
	printf("��ȭ����� %f �̴�.\n",
	  HarmonicMean(array,sizeof(array)/sizeof(array[0]))); 
}

//������ ���ϱ�
double ArithmeticMean(double array[], int num)
{ 
	int i; 
	double sum=0.0; 
	for (i=0; i<num; i++) 
		sum += array[i]; 
	return sum/num; 
} 

//������� ���ϱ�
double GeometricMean(double array[], int num)
{ 
	int i; 
	double sum=0.0; 
	for (i=0; i<num; i++) 
		sum += log(array[i]); 
	return exp(sum/num); 
} 

//��ȭ��� ���ϱ�
double HarmonicMean(double array[], int num)
{ 
	int i; 
	double sum=0.0; 
	for (i=0; i<num; i++) 
		sum += (1/array[i]); 
	return (num/sum); 
} 
