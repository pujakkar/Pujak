#include<bits/stdc++.h>  
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
bool isBst(node* root,node* min,node* max){
    if(root==NULL){
        return true;
    }
    if(max!=NULL && (root->data>=max->data)){
        return false;
    }
    if(min!=NULL && (root->data<min->data)){
        return false;
    }
    bool left=isBst(root->left,min,root);
    bool right=isBst(root->right,root,max);
    return left and right;
}
int32_t main(){
    node* root=new node(1);
    root->left=new node(4);
    root->right=new node(6);
    root->left->left=new node(3);
    root->right->right=new node(2);
    if(isBst(root,NULL,NULL)){
        cout<<"Valid BST";
    }
    else{
        cout<<"Not valid BST";
    }
    return 0;
}