#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int arr[],int n)  /*receives the array to sort and no of elements in the array*/
{
    int i,j;
    for(i=0;i<n;i++)
    {
      int tmp=arr[i]; /*sorting starts from the left-most element i.e arr[0]*/
      j=i;  /*j and i contains index value*/
      while(j>0 && tmp < arr[j-1])  /*if the element at index j is < the element at index j-1 then element at j is assigned the value at index j-1*/
      {
          arr[j]=arr[j-1];
          j--;
      }
      arr[j]=tmp; /*completes the swap of an element*/
    }
}

void print_arr(int arr[],int n) /*receives the array to sort and no of elements in the array and prints each element in the array*/
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n\n"); /*line break is inserted after printing all the values in the array*/
}
int main()
{
    int arr[5]={545,-23,54,-13,32};
    printf("Array before sorting\n\n");
    print_arr(arr,5);
    printf("Array after Insertion Sort\n\n");
    insertion_sort(arr,5);
    print_arr(arr,5);
    return 0;
}
