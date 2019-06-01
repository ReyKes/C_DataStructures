#include<stdio.h>
#include<stdlib.h>

int main()
{
   int arr[]={2,4,1,5,2,5,1,3,3,8};
   int i,j,counter;
   for(i=0;i<10;i++)
   {
       counter=0;
       for(j=0;j<10;j++)
       {
           if(arr[j]==arr[i])
           {
               counter++;
           }
       }
       printf("\nThe number T[%d] has existed %d times",i,counter);
   }

    return 0;
}
