#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a[20], l, i, decimal;
	char s[50];
	printf("Enter The Roman Number: ");
	scanf("%[CDILMVX]",s);

	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]=='I')
			a[i]=1;
		else if(s[i]=='V')
			a[i]=5;
		else if(s[i]=='X')
			a[i]=10;
		else if(s[i]=='L')
			a[i]=50;
		else if(s[i]=='C')
			a[i]=100;
		else if(s[i]=='D')
			a[i]=500;
		else if(s[i]=='M')
			a[i]=1000;
	}
	decimal=a[l-1];
	for(i=l-1;i>0;i--){
		if(a[i]>a[i-1])
			decimal=decimal-a[i-1];
		else if(a[i]==a[i-1] || a[i]<a[i-1])
			decimal=decimal+a[i-1];
	}
	printf("%d",decimal);
}
