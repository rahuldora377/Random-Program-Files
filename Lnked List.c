#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void insert();
void display();
void insert_begin();
void insert_last();
struct node
{
	int data;
	struct node *link;
};

struct node *root = NULL, *newnode, *temp;
//*root=NULL;
void main()
{
	int ch;
	while (1)
	{
		printf("\n 1.Insert Element \n 2.Display \n 3.Insert At Begining \n 4.Insert At Last \n 5.Exit \n");
		printf("Enter Your Option: ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			insert();
			break;
		case 2:
			display();
			break;
		case 3:
			insert_begin();
			break;
		case 4:
			insert_last();
			break;
		case 5:
			exit(1);
		}
	}
}

void insert()
{
	char ch;
	do
	{
		printf("Enter Data:");
		newnode = (struct node *)malloc(sizeof(struct node));
		scanf("%d", &newnode->data);
		newnode->link = NULL;
		if (root == NULL)
		{
			temp = root = newnode;
		}
		else
		{
			temp->link = newnode;
			temp = newnode;
		}
		printf("Do You Want To Add More Data:");
		scanf(" %c", &ch);
	} while (ch == 'y' || ch == 'Y');
}

void display()
{
	temp = root;
	printf("\n::::::::::Elements Of The List Are::::::::\n");
	while (temp != NULL)
	{
		printf("%d \n", temp->data);
		temp = temp->link;
	}
}

void insert_begin()
{
	//	int item;
	printf("Enter The Data:");
	newnode = (struct node *)malloc(sizeof(struct node));
	scanf("%d", &newnode->data);
	if (root == NULL)
	{
		temp = root = newnode;
	}

	else
	{
		newnode->link = NULL;
		temp = root;
		root = newnode;
		root->link = temp;
	}

	//	root->data=newnode;
}

void insert_last()
{
	printf("Enter The Data:");
	newnode = (struct node *)malloc(sizeof(struct node));
	scanf("%d", &newnode->data);
	newnode->link = NULL;
	temp = root;
	while (temp->link != NULL)
	{
		temp = temp->link;
	}
	temp->link = newnode;
}
