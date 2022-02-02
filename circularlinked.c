#include<stdio.h>
#include<stdlib.h>
struct Employee{
	char name[20];
	struct Employee *link;
};
struct Employee *Add(struct Employee *);
void Display(struct Employee *);
int main()
{
	int choice;
	struct Employee *head=NULL;
	while(1)
	{
		printf("1.Add 2.Display 3.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=Add(head);
				break;
			case 2:Display(head);
			       break;
			case 3:exit(0);
		}
	}
}
struct Employee *Add(struct Employee *ptr)
{
	struct Employee *newnode=NULL,*temp=NULL;
	newnode=calloc(1,sizeof(struct Employee));
	if(newnode==NULL)
	{
		printf("Node not created\n");
	}
	else
	{
		printf("enter the name\n");
		scanf("%s",newnode->name);
		if(ptr==NULL)
		{
			ptr=newnode;
		}
		else
		{
			temp=ptr;
			while(temp->link!=ptr)
			{
		temp=temp->link;
																			}
	temp->link=newnode;
		}
newnode->link=ptr; 
}
return ptr;
}
void Display(struct Employee *ptr)
{
	struct Employee *temp=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=ptr;
		do
		{
			printf("%s\n",temp->name);
			temp=temp->link;
		}while(temp!=ptr);
	}
}






