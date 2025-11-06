#include<stdio.h>
int main()
{
	int i,tn,ts;
	printf("enter tn&ts values");
	scanf("%d%d",&tn,&ts);
	for(i=1;i<=ts;i++)
	{
		printf("%d*%d=%d",i,tn,i*tn);
	}
	return 0;
}
