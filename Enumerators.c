#include<stdio.h>
#include<stdlib.h>

enum month_t{jan,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec};
typedef enum month_t month_t;
int main()
{
   // int month_t=8;
    month_t mymonth;
    mymonth=may;
    if (mymonth<=may)
    {
        printf("It may be may");
    }
    return 0;
}
