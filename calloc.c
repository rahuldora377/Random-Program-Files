#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int *ptr, *n, sum=0, no, num, i;
    printf("Enter the numbers of elements: ");
    scanf("%d", &num);
    ptr = (int *)calloc(num, sizeof(int));//calloc accepts 2 arguments first one is number of elements and second one is number of bytes or the type of data
    n = ptr;//storing the pointer address to another variable because in program i am going to increase the pointer address
    if (ptr == NULL)//if calloc() fails to create memory block it returns NULL value 
    {
        printf("\t::::::::Memory not created::::::");
        exit(0);//it is used to terminate the program
    }
    else
    {
        for (i = 0; i < num; i++)
        {
            printf("Enter %d Element: ",i+1);
            scanf("%d", ptr);//here we don't have to use & sign because it is a pointer and it holds the base address
            sum = sum + *ptr;//*=Deference operator to access the pointer variable
            ptr++;//increase the address of pointer to accept the value from the user(*imp)  
        }
        printf("\t::::::Printing All Elements:::::::::\n"); 
        for (i = 0; i < num; i++)
        {
            printf("%d\n", *n);
            n++;
        }
        printf("\t::::::::Sum Of All Elements::::::::::\n");
        printf("%d",sum);
    }
}