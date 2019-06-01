#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[6]="app";
    char str1[6]="App";
    int result=strcmp(str,str1);
    printf("%d",result);
    char c='a';
    printf("\n%d",c);
    printf("\n%d",'Z');

}
