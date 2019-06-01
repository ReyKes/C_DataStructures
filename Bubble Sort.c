#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void bubble_sort(int arr[],int n)
{
    bool sorted;
    do
    {
        sorted=true;
        int i;
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                sorted=false;
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                sorted=false;
            }
        } /*at the end of each complete for loop iteration the biggest element would be pushed to the last*/
    }while(sorted==false);
}

int main()
{
    int arr[10]={54,45,351,43,1451,35,1,34,5231,5};
    bubble_sort(arr,10);
    int i;
    printf("***\tBubble Sort\t***\n\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}
