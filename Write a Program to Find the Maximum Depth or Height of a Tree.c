#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* new_node(int new_data)
{
 struct node *temp=(struct node*)malloc(sizeof(struct node));
 temp->data=new_data;
 temp->left=NULL;
 temp->right=NULL;
return temp;
}
int maxHeight(struct node *root)
{
    if(root==NULL)
        return 0;
    else{
     int l=maxHeight(root->left);
     int r=maxHeight(root->right);
     if(l>r)
        return l+1;
     else return r+1;
    }
}
int main()
{
  struct node *root=new_node(1);
  root->left=new_node(2);
  root->right=new_node(3);
  root->right->left=new_node(4);
  root->right->right=new_node(5);
  printf("%d\n",maxHeight(root));

return 0;
}
