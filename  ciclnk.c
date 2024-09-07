//11. PROGRAM TO INSERT AND DELETE ELEMENTS FROM A CIRCULAR LINKED LIST
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct NODE
{
	int data;
	struct NODE *link;
};
typedef struct NODE node;
node *newnode,*front=NULL,*rear=NULL,*temp;

void cqInsert(int item)
{
	newnode=(node *)malloc(sizeof(node));
	newnode->data=item;
	newnode->link=NULL;

	//to insert the first node
	if(front==NULL && rear==NULL)
	{
		front=rear=newnode;
		rear->link=front;
	}
	else
	{
		rear->link=newnode;
		rear=newnode;
		rear->link=front;
	}
}


void display()
{
	temp=front;
	do
	{
		printf("%d-",temp->data);
		temp=temp->link;
	}while(temp!=front);
	printf("<-");

}

void main()
{
	int ch,item;
	clrscr();
	do
	{
		printf("\nEnter element to be inserted :");
		scanf("%d",&item);
		cqInsert(item);
		printf("Press 1 to add more nodes and 0 to exit : ");
		scanf("%d",&ch);
	}while(ch!=0);
	printf("\n Circular List\n");
	display();
	getch();
}
