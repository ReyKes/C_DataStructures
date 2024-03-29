#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int beg,int end)
{
    int m=(beg+end)/2;
    int tmp_arr[end-beg+1];
    int i=beg,j=m+1;
    int k=0;
    while(i <= m && j <= end)
    {
        if(arr[i] < arr[j])
            tmp_arr[k++]=arr[i++];
        else
            tmp_arr[k++]=arr[j++];
    }
    while(i<=m)
        tmp_arr[k++]=arr[i++];
    while(j<=end)
        tmp_arr[k++]=arr[j++];
    for(i=0;i<k;i++)
        arr[beg+i]=tmp_arr[i];

}

void merge_sort(int arr[],int beg,int end)
{
    if(beg==end)
        return;
    int m=(beg+end)/2;
    merge_sort(arr,beg,m);
    merge_sort(arr,m+1,end);
    merge(arr,beg,end);
}

void print_arr(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[6]={1,3,2,4,10,-1};
    merge_sort(arr,0,5);
    print_arr(arr,6);


    return 0;
}
