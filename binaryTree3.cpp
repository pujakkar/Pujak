#include<bits/stdc++.h>  //build tree from postorder and inorder
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
int search(int inorder[],int start,int end,int curr){
    for(int i=0;i<=end;i++){
        if(curr==inorder[i]){
            return i;
        }
    }
    return -1;
}
node* buildTree(int postorder[], int inorder[],int start, int end){
    if(start>end){
        return NULL;
    }
    static int idx=end;
    int curr=postorder[idx];
    idx--;
    node* root=new node(curr);
    if(start==end){
        return root;
    }
    int pos=search(inorder,start,end,curr);
    root->right=buildTree(postorder,inorder,pos+1,end);
    root->left=buildTree(postorder,inorder,start,pos-1);
    return root;
}
void Printinorder(node* root1){
    if(root1==NULL){
        return;
    }
    Printinorder(root1->left);
    cout<<root1->data<<" ";
    Printinorder(root1->right);
}
int32_t main(){
    int postorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    node* root1=buildTree(postorder,inorder,0,4);
    Printinorder(root1);
    return 0;
}