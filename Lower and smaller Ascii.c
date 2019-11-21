#include<stdio.h>

void main()
{
    int i,j,num;
    char ch;
    printf("Enter a letter:");
    scanf("%c",&ch);
    num=(int)ch;
    if(num>90&&num<96)
    {
        printf("Program terminated");
    }
    if(num>=65&&num<=90)
    {

        for(i=65; i<=num; i++)
        {
            for(j=65; j<=i; j++)
            {
                printf("%c",j);
            }
            printf("\n");
        }
    }
    else if(num>=97&&num<=122)
    {
        for(i=97; i<=num; i++)
        {
            for(j=97; j<=i; j++)
            {
                printf("%c",j);
            }
            printf("\n");
        }
    }
}
