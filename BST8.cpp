#include<bits/stdc++.h> //identical bst
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
bool isIdentical(node* root1,node* root2){
    if(root1==NULL  && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        if(root1->data==root2->data){
            bool left=isIdentical(root1->left,root2->left);
            bool right=isIdentical(root1->right,root2->right);
            return left && right;
        }
        else{
            return false;
        }
    }
}
int32_t main(){
    node* root1=new node(2);
    root1->left=new node(1);
    root1->right=new node(3);
    node* root2=new node(2);
    root2->left=new node(1);
    root2->right=new node(4);
    if(isIdentical(root1,root2)){
        cout<<"Identical BSTs";
    }
    else{
        cout<<"Not identical BSTs";
    }
    return 0;
}