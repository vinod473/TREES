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
}
int check(struct node *tree1,struct node *tree2)
{
    if( tree1==NULL&&tree2==NULL)
        return 1;
    if( tree1!=NULL&&tree2!=NULL)
    {
        return (tree1->data==tree2->data&&check(tree1->left,tree2->left)&&check(tree1->right,tree2->right));
    }
    return 0;
}
int main()
{
struct node *root1=createnode(1);
  root1->left=createnode(2);
  root1->right=createnode(3);
  root1->left->left=createnode(4);
  root1->left->right=createnode(5);
  root1->right->left=createnode(6);
  struct node *root2=createnode(1);
  root2->left=createnode(2);
  root2->right=createnode(3);
  root2->left->left=createnode(4);
  root2->left->right=createnode(5);
  printf("%s\n",(check(root1,root2)?"yes":"no"));
    root2->right->left=createnode(6);
      printf("%s\n",(check(root1,root2)?"yes":"no"));
return 0;
}
