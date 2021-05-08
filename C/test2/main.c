#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    //printf("A\r\nB\r\nC");
    /* A
       B
       C    */
    //printf("A\\B\\C");
    // A\B\C
    //char str[3]={'a','b','c'};
    //printf("%s",str);
    printf("%s",argv[2]);
    return 0;
}
