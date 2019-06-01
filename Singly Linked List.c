#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Linked List can be used as stack, queue

struct list_node
{
    int value;
    struct list_node* next;
};

typedef struct list_node list_node;

struct list
{
    list_node* head;
    int size;
};

typedef struct list list;

list* create_list()
{
    list* l=(list*)malloc(sizeof(list));
    l->head=NULL;
    l->size=0;
    return l;
}

bool empty_list(list* l)
{
    return l->size==0;
}

void push_front_list(list* l,int value)
{
    list_node* ln=(list_node*)malloc(sizeof(list_node));
    ln->value=value;
    ln->next=l->head; /*The newly created list node ln will point to the existing first list node*/
    l->head=ln; /*The list head will point to the newly created list node ln, which has now become the first list node*/
    l->size++;
}

void push_back_list(list* l,int value)
{
    list_node* ln=(list_node*)malloc(sizeof(list_node));
    ln->value=value;
    ln->next=NULL; /* Thhis newly created node is going to be the last node. So it's next pointer should be NULL */
    list_node* p=l->head;
    while(p != NULL && p->next != NULL)
        p=p->next;
    if(p==NULL)  /*If no node is created l->head=NULL, hence p is also NULL as p=l->head */
        l->head=ln; /*The newly created node will be the first node in the list*/
    else
        p->next=ln;
    l->size++;

}

int pop_front_list(list* l)
{
    if(empty_list(l))
    {
        printf("Error, empty list!\n");
        return 0;
    }
    int value=l->head->value;
    list_node* ln=l->head;
    l->head=l->head->next;
    free(ln);
    l->size--;
    return value;

}

int pop_back_list(list* l)
{
    if(empty_list(l))
    {
        printf("Error, empty list!\n");
        return 0;
    }
    if(l->head->next==NULL)  /*l->head->next=NULL it means there's only one list node*/
    {
        int value=l->head->value;
        free(l->head);
        l->head=NULL;
        l->size--;
        return value;
    }

    list_node* ln=l->head;
    while(ln->next->next != NULL) /*navigating to one node before the last node*/
        ln=ln->next;
    int value=ln->next->value;
    free(ln->next);
    ln->next=0;
    l->size--;
    return value;

}


int main()
{
    list* l=create_list();
    push_back_list(l,5);
    push_back_list(l,3);
    push_back_list(l,8);
    while(!empty_list(l))
    {
        printf("%d\t",pop_back_list(l));

    }
    return 0;

}
