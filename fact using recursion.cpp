#include<stdio.h>
long int fact(long int);
int main()
{
	long int n,f;
	printf("enter n value");
	scanf("%d",&n);
	f=fact(n);
	printf("factorialis=%ld",f);
	return 0;
}
long int fact(long int n)
{
	if(n==0)
	return 1;
	else 
	return(n*fact(n-1));
}
