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
vector<int> zigZag(node* root){
    vector<int> ans;
    stack<node*> currLevel;
    stack<node*> nextLevel;
    bool leftToRight=true;
    currLevel.push(root);
    while(!currLevel.empty()){
        while(!currLevel.empty()){
            node* temp=currLevel.top();
            ans.push_back(temp->data);
            currLevel.pop();
            if(leftToRight){
                if(temp->left){
                    nextLevel.push(temp->left);
                }
                if(temp->right){
                    nextLevel.push(temp->right);
                }
            }
            else{
                if(temp->right){
                    nextLevel.push(temp->right);
                }
                if(temp->left){
                    nextLevel.push(temp->left);
                }
            }
        }
        swap(currLevel,nextLevel);
        leftToRight=!leftToRight;
    }
    return ans;
}
int32_t main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(4);
    root->right->right=new node(5);
    root->left->right->left=new node(6);
    root->left->right->right=new node(7);
    vector<int> answer=zigZag(root);
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    return 0;
}