#include <stdio.h>
#include <stdlib.h>

int countDigit(int Num)
{
    int count=0;
    while(Num>=1)
    {
        Num /= 10;
        count++;
    }
    return count;
}
void reverseNum(int Num)
{
    char snum[5];
    itoa(Num,snum,10);
    int index=countDigit(Num)-1;
    for(;index>=0;index--)
    {
        printf("%c",snum[index]);
    }


}


