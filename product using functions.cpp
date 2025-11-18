#include<stdio.h>
void pro(int,int);
int main()
{
	int x=2,y=6;
	pro(x,y);
	return 0;
}
void pro(int x,int y)
{
	int z;
	z=x*y;
	printf("product=%d",z);
}
