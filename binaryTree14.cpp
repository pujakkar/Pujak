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
node* findLCA(node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* left=findLCA(root->left,n1,n2);
    node* right=findLCA(root->right,n1,n2);
    if(left !=NULL && right!=NULL){
        return root;
    }
    else if(left!=NULL){
        return findLCA(root->left,n1,n2);
    }
    else if(right!=NULL){
        return findLCA(root->right,n1,n2);
    }
}
int32_t main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->right=new node(5);
    node* result=findLCA(root,4,5);
    cout<<result->data;
    return 0;
}