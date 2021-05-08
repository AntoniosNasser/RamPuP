#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char String1[20]={0},String2[20]={0},ch;
    int i =0;

    printf("Enter the first name: ");
    for(;i<20;i++)
    {
        ch=getch();
        if((ch==10||ch=='\n'||ch=='\r')||i==39)
        {
            break;
        }
        else
        {
            String1[i]=ch;
        }
    }
    printf("\nEnter the Last name: ");
    for(i=0;i<20;i++)
    {
        ch=getch();
        if((ch==10||ch=='\n'||ch=='\r')||i==39)
        {
            break;
        }
        else
        {
            String2[i]=ch;
        }
    }
    printf("\nthe full name : %s %s",String1,String2);
    return 0;
}
