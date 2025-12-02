#incluide<stdio.h>
int main()
{
	int *p,**q,a=10;
	p=&a;
	q=&p;
	printf("value of a=%d",a);
	printf("\n value of p=%d",*p);
	printf("\n value of q=%d",**q);
	return 0;
}
