#include<bits/stdc++.h>  //max path sum 
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
int pathSum(node* root,int &ans){
    if(root==NULL){
        return 0;
    }
    int left=pathSum(root->left, ans);
    int right=pathSum(root->right,ans);
    int nodeMax=max(max(root->data, root->data+left+right),max(left+root->data,right+root->data));
    ans=max(ans,nodeMax);
    return nodeMax;
}
int maxPathSum(node* root){
    int ans=INT_MIN;
    pathSum(root,ans);
    return ans;
}
int32_t main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->right=new node(5);
    cout<<maxPathSum(root);
    return 0;
}