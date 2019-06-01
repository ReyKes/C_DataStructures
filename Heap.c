#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct heap
{
    int* arr;
    int size;
};

typedef struct heap heap;

heap* create_heap(int max_size)
{
    heap* h=(heap*)malloc(sizeof(heap));  /*allocating memory for heap*/
    h->arr=(int*) malloc(sizeof(int) * max_size); /*allocating memory for integer arr*/
    h->size=0;
    int i;

    /*initializing all elements in the array to 0 using for loop*/
    for(i=0;i<max_size;i++)
    {
        h->arr[i]=0;
    }
    return h;
}

bool empty_heap(heap* h) /*checks whether heap is empty*/
{
    return h->size==0;
}

void swap(int* nb1,int* nb2)  /*swaps two values*/
{
    int temp=*nb1;
    *nb1=*nb2;
    *nb2=temp;
}

int max(int nb1,int nb2) /*returns the max of two nos*/
{
    return nb1>nb2 ? nb1:nb2;
}

int min(int nb1,int nb2) /*returns the min of two nos*/
{
    return nb1<nb2 ? nb1:nb2;
}

void insert_max_heap(heap* h,int value) /*inserting values into max_heap*/
{
    h->arr[++h->size]=value; /*assigning value to the corresponding index of the array*/
    int child_index=h->size;

    /*if the child node is > parent node then values will be swapped */
    while(child_index>1 && h->arr[child_index] >h->arr[child_index/2])
    {
        swap(&h->arr[child_index],&h->arr[child_index/2]);
    }

}

void insert_min_heap(heap* h,int value) /*inserting values into max_heap*/
{
    h->arr[++h->size]=value; /*assigning value to the corresponding index of the array*/
    int child_index=h->size;

    /*if the child node is > parent node then values will be swapped */
    while(child_index>1 && h->arr[child_index] <h->arr[child_index/2])
    {
        swap(&h->arr[child_index],&h->arr[child_index/2]);
    }

}

int extract_max_heap(heap* h)
{
    if(empty_heap(h))
    {
        printf("Heap is full!\n");
        return -1;
    }
    int value = h->arr[1];
    h->arr[1]=h->arr[h->size];
    h->size--;
    int parent_index=1;
    int left_child_index;
    int right_child_index;
    do
    {
        left_child_index=parent_index*2;
        right_child_index=parent_index*2+1;
        if(h->arr[parent_index]>max(h->arr[left_child_index],h->arr[right_child_index]))
            break;
        if(h->size == left_child_index || h->arr[left_child_index]>h->arr[parent_index])
        {
            swap(&h->arr[left_child_index],&h->arr[parent_index]);
            parent_index=left_child_index;
        }
        else
        {
            swap(&h->arr[right_child_index],&h->arr[parent_index]);
            parent_index=right_child_index;
        }
    }while(parent_index < h->size);

    return value;

}

int extract_min_heap(heap* h)
{
    if(empty_heap(h))
    {
        printf("Heap is full!\n");
        return -1;
    }
    int value = h->arr[1];
    h->arr[1]=h->arr[h->size];
    h->size--;
    int parent_index=1;
    int left_child_index;
    int right_child_index;
    do
    {
        left_child_index=parent_index*2;
        right_child_index=parent_index*2+1;
        if(h->arr[parent_index] < min(h->arr[left_child_index],h->arr[right_child_index]))
            break;
        if(h->size == left_child_index || h->arr[left_child_index] < h->arr[parent_index])
        {
            swap(&h->arr[left_child_index],&h->arr[parent_index]);
            parent_index=left_child_index;
        }
        else
        {
            swap(&h->arr[right_child_index],&h->arr[parent_index]);
            parent_index=right_child_index;
        }
    }while(parent_index < h->size);

    return value;

}
int main()
{
    heap* h=create_heap(100);
    insert_min_heap(h,6);
    insert_min_heap(h,3);
    insert_min_heap(h,9);
    insert_min_heap(h,4);
    insert_min_heap(h,3);
    while(!empty_heap(h))
    {
        printf("%d\t",extract_min_heap(h));
    }
    return 0;
}
