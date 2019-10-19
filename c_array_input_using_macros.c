/*C Program to get input from user
using array and macros and display the array elements*/

#include<stdio.h>
#include<conio.h>
#define N 5

void main()
{
    int arr[N],i;
    for(i=0; i<N; i++)
    {
        printf("Enter %d No: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("------------Elements Are------------");
    for(i=0; i<N; i++)
    {
        printf("\n %d",arr[i]);
    }
    getch();
}
