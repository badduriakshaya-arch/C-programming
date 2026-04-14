#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *link;
};
struct stack *top=NULL,*p,*temp;
void push()
{
	int ele;
	printf("enter the element");
	scanf("%d",&ele);
	p=(struct stack*)malloc(sizeof(struct stack));
	p->data=ele;
	p->link=NULL;
	if(top==NULL)
	{
		top=p;
	}
	else
	{
		p->link=top;
	}
	top=p;
}
void disp()
{
	int t;
	temp=top;
	if(top==NULL)
	{
		printf("\nthere are no elements in the stack");
	}
	else
	{
		printf("\nthe stack elements are");
		while(temp!=NULL)
		{
			t=temp->data;
			printf("%d",t);
			temp=temp->link;
		}
	}
}
void pop()
{
	int t;
	if(top==NULL)
	{
		printf("there are no elements");
	}
	else
	{
		t=top->data;
		printf("\nthe deleted element is%d",t);
		top=top->link;
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n\t\tstack operations are");
		printf("\n\t\t\t\t1.push");
		printf("\n\t\t\t\t2.pop");
		printf("\n\t\t\t\t3.display");
		printf("\n\t\t\t\t4.exit");
		printf("\n\t\tenter your choice");scanf("%d",&ch);
		switch(ch)
		{
			case 1:push(); break;
			case 2:pop(); break;
			case 3:disp(); break;
			case 4:exit(0);
			default:printf("\ninvalid choice,try again");
		}	
	}
}
