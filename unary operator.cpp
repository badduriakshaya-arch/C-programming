#include<stdio.h>
int main()
{
	int p,q,r,s,x=10;
	p=x++;
	printf("%d",p);
	q=++x;
	printf("\n%d",q);
	r=x--;
	printf("\n%d",r);
	s=--x;
	printf("\n%d",s);
	printf("\n%d",x);
	return 0;
	
}

