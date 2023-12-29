#include<bits/stdc++.h> //build bst from preorder
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
node* constructTree(int preorder[],int* index,int key,int min,int max,int n){
    if(*index>=n){
        return NULL;
    }
    node* root=NULL;
    if(key>min && key<max){
        root=new node(key);
        *index=*index+1;
        if(*index<n){
            root->left=constructTree(preorder,index, preorder[*index],min ,key,n);
        }
        if(*index<n){
            root->right=constructTree(preorder,index,preorder[*index],key,max,n);
        }
    }
    return root;
}
void preOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right); 
}
int32_t main(){
    int preorder[]={10,2,1,13,11};
    int n=5;
    int index=0;
    node* root=constructTree(preorder,&index,preorder[0],INT_MIN,INT_MAX,n);
    preOrder(root);
    return 0;
}