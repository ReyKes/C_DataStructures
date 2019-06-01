#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Palindrome(char T[])
{
    int beg=0,end=strlen(T)-1;
    while(beg < end)
    {
        if( T[beg++] != T[end--] ) /*Post-increment hence first comparison will be T[0] != T[strlen(T)-1]*/
            return 0;
    }
    return 1;
}
 int main()
 {
     if(Palindrome("radar"))
        printf("Palindrome");
     else
        printf("Not Palindrome");
      return 0;
 }
