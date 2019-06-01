/*/* Tree-> bunch of nodes connected together as a tree. Merge Sort Algorithm uses Tree data structure.
 *
 * In binary tree the value of left child is less that parent and value of right child is greater than parent. The parent will be bigger than
 * all of its left sub children and smaller than all of its right sub children. Elements that are already present in the tree will not be added again.
 *
 */


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct tree_node
{
    int value;
    struct tree_node* left_child;
    struct tree_node* right_child;
};

typedef struct tree_node tree_node;

struct tree
{
    tree_node* root;
    int size;
};

typedef struct tree tree;

tree* create_tree()    /*This function will be called to create the tree node. It will be called only once*/
{
    tree* t=(tree*)malloc(sizeof(tree));
    t->root=NULL;
    t->size=0;
}

bool empty_tree(tree* t)
{
    return t->size==0;
}

void insert_tree(tree* t, int value)
{
    tree_node* tn=(tree_node*)malloc(sizeof(tree_node));
    tn->left_child=tn->right_child=NULL;
    tn->value=value;
    if(empty_tree(t))
    {
        t->root=tn;
        t->size++;
        return ;
    }
    tree_node* root=t->root;
    while(true)
    {
         if(value < root->value)
         {
             if(root->left_child ==NULL)
             {
                 root->left_child=tn;
                 t->size++;
                 return ;
             }
             else
                root=root->left_child;
         }
         else if( value > root->value)
         {
             if(root->right_child==NULL)
             {
                 root->right_child=tn;
                 t->size++;
                 return ;
            }
            else
                root=root->right_child;
         }
         else
            break;
    }
}
void print_tree(tree_node* root)
{
    if(root == NULL)
        return ;
    print_tree(root->left_child);
    printf("%d\t",root->value);
    print_tree(root->right_child);
}
int main()
{
    tree* t=create_tree();
    insert_tree(t,5);
    insert_tree(t,7);
    insert_tree(t,3);
    insert_tree(t,4);
    insert_tree(t,7);
    print_tree(t->root);
    return 0;
}
