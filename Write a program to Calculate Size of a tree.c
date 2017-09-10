#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* createnode(int new_data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->left=NULL;
    new_node->right=NULL;
return new_node;
};
int size(struct node *root)
{
    if( root == NULL)
        return 0;
    else return(1+size(root->left)+size(root->right));
}
int main()
{
  struct node *root=createnode(1);
  root->left=createnode(2);
  root->right=createnode(3);
  root->left->left=createnode(4);
  root->left->right=createnode(5);
  root->right->left=createnode(6);
  printf("%d",size(root));
return 0;
}
