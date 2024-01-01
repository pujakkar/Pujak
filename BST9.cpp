#include<bits/stdc++.h> //largest bst in a bt
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
struct info {
    int size;
    int min;
    int max;
    int ans;
    bool isBST;
};
info largestBST(node* root){
    if(root==NULL){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left==NULL && root->right==NULL){
    return {1,root->data,root->data,1,true};
    }
    info left=largestBST(root->left);
    info right=largestBST(root->right);
    info curr;
    curr.size=(left.size+right.size+1);
    if(left.isBST && right.isBST && root->data > left.max && root->data<right.min){
        curr.min=min(left.min,min(root->data,right.min));
        curr.max=max(right.max,max(left.max,root->data));
        curr.ans=curr.size;
        curr.isBST=true;
    }
    else{
        curr.isBST=false;
        curr.ans=max(left.ans,right.ans);
    }
    return curr;
}
int32_t main(){
    node* root=new node(10);
    root->left=new node(9);
    root->right=new node(15);
    root->left->left=new node(8);
    root->left->right=new node(11);
    root->right->left=new node(14);
    root->right->right=new node(20);
    info bst=largestBST(root);
    cout<<bst.ans; 
    return 0;
}