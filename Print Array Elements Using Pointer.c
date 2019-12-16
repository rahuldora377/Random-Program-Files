#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int num[20],i;
    int *ptr;
    for(i=0;i<5;i++)
    {
        printf("Enter number: ");
        scanf("%d",&num[i]);

    }
    ptr=&num[0];//address of the pointer will increase if  we increase the pointer so i allocate the address to another variable
    printf("+++++++Elements Array+++++++++++++");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));//basic rule=*(ptr+i*sizeof(int))
    }
}