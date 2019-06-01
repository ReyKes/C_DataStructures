#include<stdio.h>
#include<stdlib.h>
int sum(int arr[],int n)
{
    int s=0;
    int i;
    for(i=0;i<n;i++)
    {
        s+=arr[i];
    }
    return s;
}

int get_input(int arr[])
{
    int n;
    printf("Type in the size of the array\t");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        printf("Type in arr[%d]: ",i);
        scanf("%d",&arr[i]);

    }
}

int main()
{
    int arr[]={4,2,40,2,4};
    int n=get_input(arr);
    int s=sum(arr,n);
    printf("The sum is:%d",s);
}
