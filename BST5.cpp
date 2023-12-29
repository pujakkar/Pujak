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
node* buildBST(int array[],int start,int end){
    if(start>end){
        return NULL;
    }
    int mid=start+(end-start)/2;
    node* root=new node(array[mid]);
    root->left=buildBST(array,start,mid-1);
    root->right=buildBST(array,mid+1,end);
    return root;
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int32_t main(){
    int array[]={10,20,30,40,50};
    int n=sizeof(array)/sizeof(array[0]);
    node* root=buildBST(array,0,n-1);
    preorder(root);
    return 0;
}