#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter x&y&z values");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	if(x>z)
	printf("x is big");
	else
	printf("z is big");
	else
	if(y>z)
	printf("y is big");
	else
	printf("z is big");
	return 0;
}
