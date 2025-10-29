#include<stdio.h>
int main()
{
	long int i,n,fact=1;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial is=%ld",fact);
	return 0;
}
