#include <stdio.h>
#include <stdlib.h>

struct Zombie
{
int id;
float ht;


};
typedef struct Zombie zombie;
int main()
{
    zombie blue;
    blue.id=3;
    blue.ht=6.75;
    printf("ZOmbie's id is:%d",blue.id);
    printf("\nZOmbie's height is:%f",blue.ht);

    return 0;
}
