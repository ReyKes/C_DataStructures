#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct stack_node
{
    int value;
    struct stack_node* next;
};
typedef struct stack_node stack_node;

struct stack
{
    int size;
    stack_node* top;
};

typedef struct stack stack;

stack* create()
{
    stack* s=(stack*)malloc(sizeof(stack));
    s->size=0;
    s->top=NULL;
    return s;
}
bool isEmpty(stack* s)
{
    return s->size==0;
}
void push(stack* s,int value)
{
    stack_node* sn=(stack_node*)malloc(sizeof(stack_node));
    sn->value=value;
    sn->next=s->top;
    s->top=sn;
    s->size++;
}
int pop(stack* s)
{
    if(isEmpty(s))
    {
        printf("Stack is empty... No element present to pop");
        return 0;
    }
    stack_node* sn=(stack_node* )malloc(sizeof(stack_node));
    sn=s->top;
    printf("\t%d",s->top->value);
    s->top=sn->next;
    free(sn);
    s->size--;

}
int main()
{
    stack* s=create();
    push(s,3);
    push(s,4);
    push(s,9);

      while(!isEmpty(s))
    {
        pop(s);
    }

    return 0;
}
