#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char String[40]={0},ch;
    int i =0;

    printf("Enter a string: ");
    for(;i<40;i++)
    {
        ch=getch();
        if((ch==10||ch=='\n'||ch=='\r')||i==39)
        {
            break;
        }
        else
        {
            String[i]=ch;
        }
    }
    printf("\nthe input string : %s",String);
    return 0;
}
