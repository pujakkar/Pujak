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
int catalan(int n){  //nth catalan number 
    int sum=0;
    if(n<=1){
        return 1;
    }
    else{
        for(int i=0;i<n;i++){
            sum+=catalan(i)*catalan(n-i-1);
        }
    }
    return sum;
}
vector<node*> constructTrees(int start,int end){
    vector<node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start;i<=end;i++){
        vector<node*> leftsubTrees=constructTrees(start,i-1);
        vector<node*> rightsubTrees=constructTrees(i+1,end);
        for(int j=0;j<leftsubTrees.size();j++){
            node* left=leftsubTrees[j];
            for(int k=0;k<rightsubTrees.size();k++){
                node* right=rightsubTrees[k];
                node* root=new node(i);
                root->left=left;
                root->right=right;
                trees.push_back(root);
            }
        }
    }
    return trees;
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int32_t main(){
    //cout<<catalan(4);
    vector<node*> totalTrees=constructTrees(1,3);
    for(int i=0;i<totalTrees.size();i++){
        preorder(totalTrees[i]);
        cout<<endl;
    }
    return 0;
}