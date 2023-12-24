#include<bits/stdc++.h> //no of nodes & sum of nodes
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
int noOfNodes(node* root){
    int count=0;
    if(root==NULL){
        return 0;
    }
    return noOfNodes(root->left)+noOfNodes(root->right)+1;
}
int sumOfNodes(node* root){
    if(root==NULL){
        return 0;
    }
    return sumOfNodes(root->left)+sumOfNodes(root->right)+(root->data);
}

int32_t main(){
    node* root=new node(1);
    root->left= new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<noOfNodes(root)<<endl;
    cout<<sumOfNodes(root);
    return 0;
}