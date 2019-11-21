#include<stdio.h>

void main()
{
    FILE *fp;
    char ch;
    fp=fopen("new.txt","w");
    printf("Enter a String:");
    while((ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }
    fclose(fp);
    printf("--------------OUTPUT----------------\n");
    fp=fopen("new.txt","r");
    while((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
}
