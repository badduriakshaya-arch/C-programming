#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	printf("\n before swap a=%db=%d",a,b);
	swap(&a,&b);
	return 0;
}
void swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("\n after swap a=%db=%d",*x,*y);
}
