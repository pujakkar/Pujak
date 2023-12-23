#include<bits/stdc++.h>  //build tree from preorder and inorder
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
int search(int inorder[], int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
node* buildTree(int inorder[], int preorder[], int start, int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    node* root=new node(curr);
    if(start==end){
        return root;
    }
    int pos=search(inorder,start,end, curr);
    root->left=buildTree(inorder,preorder,start,pos-1);
    root->right=buildTree(inorder,preorder,pos+1,end);
    return root;
}
void Printinorder(struct node* root){
    if(root==NULL){
        return;
    }
    Printinorder(root->left);
    cout<<root->data<<" ";
    Printinorder(root->right);
}
int32_t main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    node* root1 = buildTree(inorder,preorder,0,4);
    Printinorder(root1);
    return 0;
}