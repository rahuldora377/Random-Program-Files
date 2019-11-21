#include<stdio.h>
#include<conio.h>

void main()
{
    int mark[20],size,i;
    int *point[20];
    printf("Enter the size: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter element: ");
        scanf("%d",&mark[i]);
        point[i]=&mark[i];
    }
    printf("************marks using Array************");
    for(i=0;i<size;i++)

    {
        printf("\n%d",mark[i]);
    }
    printf("************marks using Pointer************");
    {
        printf("\n%d", *point[i++]);
    }
    getch();
}
