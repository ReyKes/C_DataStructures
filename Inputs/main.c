#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int a;
//    scanf("%d",&a);
//    printf("%d",a);

//    char aa[100];
//    gets(aa);
//    printf("%s",aa);

  int a;
  int *p;
  a=7;
  p=&a;
  *p=9;
  printf("%d",a);
  printf("\n%d",*p);

    return 0;
}
