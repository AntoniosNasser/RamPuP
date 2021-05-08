#include <stdio.h>
#include <stdlib.h>

int studentResult[3][4];

void CollectData(void);

void PrintResult(void);

int main()
{
    CollectData();
    PrintResult();
}

void CollectData(void)
{
    char strArr[4][7]={"first ","second","third ","fourth"};
    for(int i =0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Enter result of %s student for %s subject :",strArr[i],strArr[j]);
            scanf("%d",&studentResult[i][j]);
        }
    }
    system("cls");
}
void PrintResult(void)
{
    int sum,i,j;
    for(i =0;i<3;i++)
    {
        sum =0;
        for(j=0;j<4;j++)
        {
            printf("%d\t",studentResult[i][j]);
            sum += studentResult[i][j];

        }
        printf("%d\n",sum);
    }
    for(i =0;i<4;i++)
    {
        sum =0;
        for(j=0;j<3;j++)
        {
            sum += studentResult[j][i];

        }
        printf("%d\t",sum/3);
    }
}


