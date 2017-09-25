#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
struct node* new_node(int data)
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
 temp->data=data;
 temp->left=NULL;
 temp->right=NULL;
return temp;
}
struct node* insert(struct node *root,int data)
{
    if( root == NULL )
        return new_node(data);
    if( root->data < data )
        root->right=insert(root->right,data);
    else if( root->data > data )
        root->left=insert(root->left,data);
return root;
}
void inorder(struct node *root)
{
    if(root!=NULL )
    {
        inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    }
}
int main()
{
    struct node *root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);
 inorder(root);
return 0;
}
