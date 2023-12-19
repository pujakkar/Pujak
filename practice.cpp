#include<bits/stdc++.h>                  //add at tail and head
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val ){
        data=val;
        next=NULL;
    }
};
void insertatHead(node* &head, int val){
    node* n= new node(val);
    n->next=head;
    head=n;}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int32_t main(){
    node* head=NULL;
    insertatHead(head,1);
    print(head);
    return 0;
}