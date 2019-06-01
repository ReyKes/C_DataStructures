#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=5; /*variable inside {} is not accessible outside*/
    {
         int i=4;  /*variable outside {} is accessible inside {}*/
          printf("\n%d",i);
    }

    printf("\n%d",i);
    return 0;
}
