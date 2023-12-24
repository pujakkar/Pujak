#include<bits/stdc++.h>  //diameter of tree
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        left=NULL;
        right=NULL;
    }
};
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);
    return max(lheight, rheight)+1;
}
int diameter(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);
    int currDia=lheight+rheight+1;
    int ldia=diameter(root->left);
    int rdia=diameter(root->right);
    return max(currDia,max(ldia,rdia));
}
int32_t main(){
    node* root=new node(1);
    root->left= new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<diameter(root);
    return 0;
}