#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j;
	printf("enter r,c values");
	scanf("%d%d",&r,&c);
	printf("enter array elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
        }  
	}
	printf("\n display 2D array elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
