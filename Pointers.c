#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* arr=(int*)malloc(sizeof(int)*100); /* */
    *(arr+1)=10;  /* rr[1] can be written as *(arr+1) */
    printf("%d",arr);
    printf("\n%d",*(arr+1));
    *arr=12; /*arr[0] can be written as *(arr+0) or *arr*/
    printf("\n%d",*(arr));

    return 0;
}
