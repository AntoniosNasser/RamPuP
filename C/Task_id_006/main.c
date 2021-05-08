#include <stdio.h>
#include <stdlib.h>

int main()
{
    int accNum = 0,inNum=0;

    while(1){
        system("cls");
        printf("Enter a Number: ");
        scanf("%d",&inNum);
        accNum += inNum;
        system("cls");
        if(accNum>100)
        {
            break;
        }


    }

    printf("The Total is %d",accNum);
}
