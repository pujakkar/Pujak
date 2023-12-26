#include<bits/stdc++.h>  //flatten a binary tree
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void flatten(node* root){
    if(root==NULL ||(root->left==NULL && root->right==NULL)){
        return;
    }
    if(root->left!=NULL){
        flatten(root->left);
        node* t=root->left;
        node* temp=root->right;
        root->right=root->left;
        root->left=NULL;
        while(t->right!=NULL){
            t=t->right;
        }    
        t->right=temp;    
    }
    flatten(root->right);
}
void printInorder(node* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
int32_t main(){
    node* root=new node(4);
    root->left=new node(9);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->right=new node(6);
    flatten(root);
    printInorder(root);
    return 0;
}