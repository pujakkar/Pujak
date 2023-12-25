#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int mod(int val){
    return (val<0)? -val : val;
}
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);
    return max(lheight,rheight)+1;
}
bool balanceHeight(node* root){
    int leftheight=height(root->left);
    int rightheight=height(root->right);
    if(mod(leftheight-rightheight)>1){
        return false;
    }
    return true;
}
int32_t main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->left->right=new node(5);
    /*root->right->left=new node(6);
    root->right->right=new node(7);*/
    cout<<balanceHeight(root);
    return 0;
}