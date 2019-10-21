// Bubble sort
#include<stdio.h>
#include<conio.h>

void main()
{
    void bubble(int [],int);
    int no,i;
    int A[50];//Declare array size
    printf("Enter the Size: ");//get the size of array from user
    scanf("%d",&no);
    for(i=0; i<no; i++)
    {
        printf("Enter %d element: ",i+1);//get the array elements from the user
        scanf("%d",&A[i]);
    }
    bubble(A,no);
    for(i=0; i<no; i++)
    {
        printf(" %d",A[i]);
    }
    getch();
}

void bubble(int A[],int N)
{
    int round,i,temp;
    for(round=1; round<=N-1; round++) //round=total size of elements-1
    {
        for(i=0; i<=N-1-round; i++)
        {
            if(A[i] > A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
    }
}

