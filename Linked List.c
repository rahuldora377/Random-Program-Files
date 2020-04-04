#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void addtolist();
void display();
void insertbegin();
void deletebegin();
void deletelast();
void insertcertain();
void insert_after_value();
void delete_value();
void reverse_list();
int count=0;
struct node *newnode,*head=NULL,*temp,*temp2,*prevnode,*current;
void main()
{
    while(1)
    {
        int ch;
        printf("\n1: Add data\n");
        printf("2.Display data\n");
        printf("3. Insert at beginning \n");
        printf("4. Delete beginning element \n");
        printf("5. Delete from last \n");
        printf("6. insert at certain position \n");
        printf("7. Insert after the value \n");
        printf("8. Delete a value \n");
        printf("9. Reverse the list \n");
        printf("10.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
        {
            addtolist();
            break;
        }
        case 2:
        {
            display();
            break;
        }
        case 3:
        {
            insertbegin();
            break;
        }
        case 4:
        {
            deletebegin();
            break;
        }
        case 5:
        {
            deletelast();
            break;
        }
        case 6:
        {
            insertcertain() ;
            break;
        }
        case 7:
        {
            insert_after_value();
            break;
        }
        case 8:
        {
            delete_value();
            break;
        }
        case 9:
        {
            reverse_list();
            break;
        }
        case 10:
        {
            exit(0);
        }
        }
    }
}
void addtolist()
{
    printf("Enter data: ");
    newnode=(struct node*)malloc(sizeof(struct node*));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        count++;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        temp=newnode;
        count++;
    }
}

void display()
{
//   printf("count is: %d \n",count);
    temp=head;
    while(temp!=NULL)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }
}

void insertbegin()
{
    temp=head;//store addres of head in temp
    printf("Enter data: ");
    newnode=(struct node*)malloc(sizeof(struct node*));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    head=newnode;//make heade points to newnode
    newnode->next=temp;//add the address of head(temp) to the next of newnode
    count++;
}

void deletebegin()
{
    printf("Deleted element is: %d \n",head->data);
    head=head->next;//shift the head pointer to its next address
}

void deletelast()
{
    temp=head;//assign value of head to temp
    while(temp->next!=NULL)//goes to the last element
    {
        temp2=temp;//store value of temp in temp2
        temp=temp->next;//shift temp to its next location
    }
    printf("Deleted data is:%d\n",temp->data);
    temp2->next=NULL;//clear its prev node link(n-1 node of that list)
}

void insertcertain()
{
    temp=head;
    int pos,i;
    printf("Enter the position: ");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node*));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    for(i=0; i<pos-2; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void insert_after_value()
{
    temp=head;
    int val;
    printf("Enter the number: ");
    scanf("%d",&val);
    newnode=(struct node*)malloc(sizeof(struct node*));
    printf("Enter value: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(temp->data!=val)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void delete_value()
{
    int val;
    printf("Enter the value: ");
    scanf("%d",&val);
    temp=head;
    while(temp->data!=val)//goes to that value
    {
        temp2=temp;//store value of temp in temp2
        temp=temp->next;//forward the value of temp
    }
    printf("Deleted value is: %d",temp->data);
    temp2->next=temp->next;//store the value of temp->next to temp2->next
}

void reverse_list()
{
    prevnode=head;
    head=head->next;
    current=head;
    prevnode->next=NULL;
    while(head!=NULL)
    {
        head=head->next;
        current->next=prevnode;
        prevnode=current;
        current=head;
    }
    head=prevnode;
}
