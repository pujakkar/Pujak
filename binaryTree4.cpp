#include<bits/stdc++.h>  //LevelOrder traversal & print the sum of kth level
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
void printLevelorder(node* root){
    if(root==NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* node=q.front();
        q.pop();
        if(node!=NULL){
            cout<<node->data<<" ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}
int sumKthLevel(node* root,int level){
    if(root==NULL){
        return -1;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int k=0;
    int sum=0;
    while(!q.empty()){
        node* node=q.front();
        q.pop();
        if(node!=NULL){
            if(k==level){
              sum+=node->data;
            }
            if(node->left){
              q.push(node->left);
            }
            if(node->right){
              q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            k++;
        }
    }
    return sum;
}
int32_t main(){
    node* root=new node(1);
    root->left= new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    printLevelorder(root);
    cout<<endl;
    cout<<sumKthLevel(root,2);
    return 0;
}