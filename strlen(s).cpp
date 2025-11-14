#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	int l;
	printf("enter string name");
	scanf("%s",&s);
	l=strlen(s);
	printf("string length=%d",l);
	return 0;
}
