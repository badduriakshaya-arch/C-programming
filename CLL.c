#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
        struct node
        {
        	int data;
        	struct node *link;
		};
		struct node *start=NULL,*last=NULL,*temp,*t1,*t2;
		void firstinsert()
		{
			int e;
			temp=(struct node*)malloc(sizeof(struct node));
			printf("\n\tenter an elemeny to store in node");
			scanf("%d",&e);
			temp->data=e;
			temp->link=NULL;
			if(start==NULL)
			{
				start=temp;
				last=temp;
			}
			else
			{
				temp->link=start;
				start=temp;
				last->link=temp;
			}
		}
		void lastinsert()
		{
			int e;
			temp=(struct node*)malloc(sizeof(struct node));
			printf("\n\tenter an element to store in node");
			scanf("%d",&e);
			temp->data=e;
			temp->link=NULL;
			if(start==NULL)
			{
				start=temp;
				last=temp;
			}
			else
			{
				temp->link=last->link;
				last->link=temp;
				last=temp;
			}
		}
		void middleinsert()
		{
			int e,pos,i=1;
			temp=(struct node*)malloc(sizeof(struct node));
			printf("\n\tenter an element to store in node");
			scanf("%d",&e);
			temp->data=e;
			temp->link=NULL;
			printf("\nenter the position to insert");
			scanf("%d",&pos);
			if(start==NULL)
			{
				start=temp;
		    }
		    else
		    {
		    	t1=start;
		    	while(i<pos)
		    	{
		    		t2=t1;
		    		t1=t1->link;
		    		i++;
				}
				temp->link=t2->link;
				t2->link=temp;
			}
		}
		void firstdelete()
		{
			if(start==NULL)
			{
				printf("\n\tlinked list is empty,no nodes to perform delete operation");
			}
			else
			{
				start=start->link;
				last->link=start;
				printf("\n\tfirtst node is deleted successfully");
			}
		}
		void lastdelete()
		{
			if(start==NULL)
			{
				printf("\n\tno nodes to perform delete operation,linked list is empty");
			}
			else
			{
			    t1=start;
				while(t1->link!=last)
				{
					t2=t1;
					t1=t1->link;
			    }
			    t1->link=start;
			    last=t1;
			}
		}
		void middledelete()
		{
			int pos,i=1;
			printf("\n\tenter the position to delete the node");
			scanf("%d",&pos);
			if(start==NULL)
			{
				printf("\n\nno nodes to perform delete operation");
			}
			else
			{
				t1=start;
				while(i<pos)
				{
					t2=t1;
					t1=t1->link;
					i++;
				}
				t2->link=t1->link;
			}
		}
		void disp()
		{
			if(start==NULL)
			{
				printf("\n\tno elements in linked list");
			}
			else
			{
				printf("\n\tlinked list elements are...");
				t1=start;
				while(t1->link!=start)
				{
					printf("%d",t1->data);t1=t1->link;
			    }
			    printf("%d",t1->data);
			}
		}
		int main()
		{
			int ch;
			while(1)
			{
				printf("\n\t\t\t...linked list operations are...");
				printf("\n\n\t\t1.firstinsert");
				printf("\n\n\t\t2.lastinsert");
				printf("\n\n\t\t3.middleinsert");
				printf("\n\n\t\t4.firstdelete");
				printf("\n\n\t\t5.lastdelete");
				printf("\n\n\t\t6.middledelete");
				printf("\n\n\t\t7.display");
				printf("\n\n\t\t8.exit");
				printf("\n\tenter your choice...");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:firstinsert(); break;
					case 2:lastinsert(); break;
					case 3:middleinsert(); break;
					case 4:firstdelete(); break;
					case 5:lastdelete(); break;
					case 6:middledelete(); break;
					case 7:disp(); break;
					case 8:exit(0);
				}
		    }
		    return 0;
		}
