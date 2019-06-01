#include<stdio.h>
#include<stdlib.h>

int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    else
        return fib(n-1) + fib(n-2); /*This is a Level 2 recursion because every factorial function calls itself two times*/



}

int main()
{
   printf("%d",fib(8));

    return 0;
}
