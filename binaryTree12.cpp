#include<bits/stdc++.h>  //shortest distance between two nodes
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
    node* left=findLCA(root->left , n1, n2);
    node* right=findLCA(root->right,n1,n2);
    if(left!=NULL && right!=NULL){
        return root;
    }
    if(left!=NULL){
        return findLCA(root->left,n1,n2);
    }
    return findLCA(root->right,n1,n2);
}
int findDist(node* root,int k, int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int left=findDist(root->left,k,dist+1);
    if(left!=-1){
        return left;
    }
    return findDist(root->right,k,dist+1);
}
int distBWnodes(node* root,int n1,int n2){
    node* lca=findLCA(root,n1,n2);
    int d1=findDist(lca,n1,0);
    int d2=findDist(lca,n2,0);
    return d1+d2;
}
int32_t main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->right=new node(5);
    cout<<distBWnodes(root,4,5);
    return 0;
}