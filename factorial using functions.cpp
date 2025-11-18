#include<stdio.h>
void fact(long int);
int main()
{
	long int n;
	printf("enter n value");
	scanf("%d",&n);
	fact(n);
	return 0;
}
void fact(long int n)
{
	long int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*1;
	}
	printf("factorial=%ld",f);
}
