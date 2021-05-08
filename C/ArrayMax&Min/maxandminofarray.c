#include<stdio.h>

void printMaxAndMinOfArr(int arr[],int arrSize)
{
    int max=arr[0],min=arr[0];
    for(int index=1;index<arrSize;index++)
    {


        if(arr[index]>max)
        {
         max=arr[index];
        }

    }
    for(int index=1;index<arrSize;index++)
    {

        if(arr[index]<min)
        {
         min=arr[index];
        }
    }
    printf("Maximum Number is %d.\n",max);
    printf("Minimum Number is %d.\n",min);
}
