#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;

    }
    return fact;
}

int main()
{
    printf("%d",fact(4));
    return 0;
}
