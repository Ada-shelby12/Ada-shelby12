//4. PROGRAM TO CREATE A SINGLE LINKED LIST
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
	int data;
	struct node *link;
};
typedef struct node NODE;

NODE *head=NULL,*newnode,*temp,*prevptr,*currptr;

//Creates a newnode at the beginning of the list
void createlist(int item)
{
	//1. Allocate memory to newnode
	newnode=(NODE *)malloc(sizeof(newnode));
	if(newnode==NULL)	//If heap is full
	{
		printf("Memory full! new node cannot be created");
		exit(0);
	}
	//2. Assign data part to the newnode
	newnode->data=item;

	//3. Assign the link part of the newnode

	if(head==NULL)		//to check if the list is empty
		newnode->link=NULL;
	else
		newnode->link=head;

	head=newnode;		//Assign head to newnode
}

//Function to traverse a list to display the node
void display()
{
	temp=head;
	if(head==NULL)
	{
		printf("\nEmpty List\n");
		return;
	}
	printf("\nElements of the List\n");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}
	printf("NULL");
}


//Deletes a node after searching for the element
void searchdelete(int item)
{
	//case 1: if the list is empty
	if(head==NULL)
	{
		printf("\nList is empty! Deletion not possible");
		return;
	}

	//if the search item is the first element
	currptr=head;
	if(currptr->data==item)
	{
		head=currptr->link;
		free(currptr);
		return;
	}

	//case 2: if search element is anywhere in the list but not first
	while(currptr!=NULL&&currptr->data!=item)
	{
		prevptr=currptr;
		currptr=currptr->link;
	}


	if(currptr==NULL)	//case 3:if search element not found in list
		printf("\n %d element not found in the list",item);
	else			//case 4:search element is found
	{
		prevptr->link=currptr->link;
		free(currptr);
	}
}

void main()
{
	int item,ch;
	clrscr();
	while(1)
	{
		printf("\nMenu\n\n1:Insert Node\n2:Delete Node\n3:Exit\n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	printf("Enter data part of the node :");
				scanf("%d",&item);
				createlist(item);
				display();
				break;
			case 2:	printf("Enter the element to be deleted: ");
				scanf("%d",&item);
				searchdelete(item);
				display();
				break;
			case 3: exit(0);
			default: printf("\nInvalid Choice");
		}
	}
	getch();
}
