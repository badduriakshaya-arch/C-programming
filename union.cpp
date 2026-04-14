#include<stdio.h>
#include<string.h>
union student{ int rollno;
char name[10];
float per;
};
int main()
{
	union student s={103,"ishu",89.99};
	printf("%d %s %f",s.rollno,s.name,s.per);
	return 0;
}
