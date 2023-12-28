#include<bits/stdc++.h> 
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
node* searchInBST(node* root,int key){ //search
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
        return searchInBST(root->left,key);
    }
    return searchInBST(root->right,key);
}
node* inorderSucc(node* root){
    node* curr=root;
    while(root && root->left!=NULL){
        curr=curr->left;
    } 
    return curr;
}
node* deleteinBST(node* root,int key){ //delete 
    if(root->data>key){
        root->left=deleteinBST(root->left,key);
    }
    else if(root->data<key){
        root->right=deleteinBST(root->right,key);
    }
    else if(root->left==NULL){
        node* temp=root->right;
        free(root);
        return temp;
    }
    else if(root->right==NULL){
        node* temp=root->left;
        free(root);
        return temp;
    }
    else if(root->right!=NULL && root->left!=NULL){
        node* temp=inorderSucc(root->right);
        root->data=temp->data;
        root->right=deleteinBST(root->right,temp->data);
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
    node* root=new node(4);
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->right=new node(6);
    /*if(searchInBST(root,10)==NULL){
        cout<<"key doesn't exist";
    }
    else{
        cout<<"key exists";
    }*/
    printInorder(root);
    cout<<endl;
    root=deleteinBST(root,2);
    printInorder(root);
    return 0;
}