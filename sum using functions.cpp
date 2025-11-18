#include<stdio.h>
void sum(int,int);
int main()
{
	int x=2,y=3;
	sum(x,y);
	return 0;
}
void sum(int x,int y)
{
	int z;
	z=x+y;
	printf("sum=%d",z);
}
