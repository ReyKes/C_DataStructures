#include<stdio.h>
#include<stdlib.h>

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1); /*This is a Level 1 recursion because every factorial function calls itself once*/
}
int main()
{
   printf("%d",fact(6));

    return 0;
}
