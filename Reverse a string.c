#include<stdio.h>

void main()
{
    char str[20],ch;
    int i,l;
    printf("Please enter a string:");
    gets(str);
    for(l=0;str[l];l++);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;

    }
    printf("reverse string is:%s",str);
}
