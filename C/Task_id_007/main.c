#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>




int main(){

    int magicbox[15][15];
    int index, row, col, size;

    printf("please enter size of magic box(maximum value is 14): ");
    scanf("%d",&size);
    printf("please enter the start row: ");
    scanf("%d",&row);
    printf("please enter the start column: ");
    scanf("%d",&col);

    for(index=1;index<=size*size;index++)
    {
        magicbox[row][col]=index;

        if(index%size == 0)
        {
            if(row==size)
                row =1;
            else
                row++;
        }
        else
        {
            if(col==1)
                col=size;
            else
                col--;
            if(row==1)
                row =size;
            else
                row--;
        }

    }


    for(row=1;row<=size;row++)
    {
        printf("\n");
        for(col=1;col<=size;col++)
        {
            printf("\t%d",magicbox[row][col]);
        }
    }

    return 0;
}

