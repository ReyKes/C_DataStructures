#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct ln
{
    int value;
    struct ln* next;

};

typedef struct ln ln;

struct list
{
    int size;
    ln* head;

};

typedef struct list list;

list* create_list()
{
    list* l=(list*)malloc(sizeof(list));
    l->size=0;
    l->head=NULL;
    return l;
}

bool is_empty(list* l)
{
    return l->size==0;

}

void push_front(list* l,int value)
{
    ln* a=(ln*)malloc(sizeof(ln));
    a->value=value;
    a->next=l->head;
    l->head=a;
    l->size++;
}
int pop_front(list* l)
{
    int value;
    if(is_empty(l))
        printf("Empty List");
    else
    {
        ln* ln=l->head;
        value=ln->value;
        l->head=ln->next;
        free(ln);
        l->size--;

    }


    return value;

}
int main()
{
    list* l=create_list();
    push_front(l,10);
    push_front(l,3);
    push_front(l,5);

    while(!is_empty(l))
    {
        printf("%d\t",pop_front(l));
        printf("%d\t",pop_front(l));
        printf("%d\t",pop_front(l));
    }
    return 0;
}
