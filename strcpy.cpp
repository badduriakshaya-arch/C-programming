#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	printf("enter s1 name");
	scanf("%s",&s1);
	printf("original string=%s",s1);
	strcpy(s2,s1);
	printf("copied string=%s",s2);
	return 0;
}
