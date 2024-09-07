//. PROGRAM TO CONSTRUCT A BINARY TREE AND TRAVERSE THE TREE
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node Node;

Node *newnode,*currptr=NULL,*prevptr=NULL,*root=NULL;

void createtree(int item)
{
	newnode=(Node *)malloc(sizeof(Node));
	newnode->data=item;
	newnode->left=NULL;
	newnode->right=NULL;

	if(root==NULL)
		root=newnode;
	else
	{
		currptr=root;
		while(currptr!=NULL)
		{
			prevptr=currptr;
			if(item>currptr->data)
				currptr=currptr->right;
			else
				currptr=currptr->left;
		}
		if(item>prevptr->data)
			prevptr->right=newnode;
		else
			prevptr->left=newnode;
	}
}

void display(Node *ptr,int level)
{
	int i;
	if(ptr!=NULL)
	{
		display(ptr->right,level+1);
		for(i=0;i<level;i++)
			printf("   ");
		printf("%2d\n",ptr->data);
		display(ptr->left,level+1);
	}
}

void preorder(Node *ptr)
{
	if(ptr!=NULL)
	{
		printf("%2d ",ptr->data);
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

void postorder(Node *ptr)
{
	if(ptr!=NULL)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		printf("%2d ",ptr->data);
	}
}

void inorder(Node *ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		printf("%2d ",ptr->data);
		inorder(ptr->right);
	}
}

void main()
{
	int item,ch;
	clrscr();
	do
	{
		printf("\nEnter data part of the node :");
		scanf("%d",&item);
		createtree(item);
		printf("Do you wish to add more nodes? Press 0 to exit ");
		scanf("%d",&ch);
	}while(ch!=0);

	printf("\nBINARY SEARCH TREE\n");
	display(root,1);

	printf("\nTREE TRAVERSALS\n");
	printf("\nPreorder Traversal\n");
	preorder(root);
	printf("\nInorder Traversal\n");
	inorder(root);
	printf("\nPostorder Traversal\n");
	postorder(root);

	getch();
}