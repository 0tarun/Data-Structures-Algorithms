#include "bits/stdc++.h"
using namespace std;
struct node{
int data;
struct node*left;
struct node*right;

node(int value)
{
    data=value;
    left=nullptr;
    right=nullptr;
}

};


void preorder(struct node*root)
{
    if(root==nullptr)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void inorder(struct node*root){
     if(root==nullptr)
     {
         return;
     }
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
}
void postorder(struct node*root){
if(root==nullptr)
{
    return;
}
postorder(root->left);
postorder(root->right);
cout<<root->data<<" ";

}

int main(){
struct node*root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
cout<<"preorder    ";
preorder(root);
cout<<"inorder     ";
inorder(root);
cout<<"postorder    ";
postorder(root);




}
