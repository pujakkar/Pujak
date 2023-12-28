#include<bits/stdc++.h>  //build bst
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
node* bst(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(root->data<val){
        root->right=bst(root->right,val);
    }
    else{
        root->left=bst(root->left,val);
    }
    return root;
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
    node* root=NULL;
    root=bst(root,5);
    bst(root,1);
    bst(root,3);
    bst(root,4);
    bst(root,2);
    bst(root,7);
    printInorder(root);
    return 0;
}