#include<bits/stdc++.h>         //reversing by 3 pointers
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data =val;
        next= NULL;
    }
};
void insertatHead(node* &head, int val){
    node* n= new node(val);
    n->next=head;
    head=n;
}
void insertatTail(node* &head, int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp= head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
node* reverse(node* &head){
    node* prvptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prvptr;
        prvptr=currptr;
        currptr=nextptr;
    }
    return prvptr;
}
void reverse2(node* &head){                 //recursive way  
    if(head==NULL){
        return;
    } 
    reverse2(head->next);
    cout<<head->data<<"->";
}    
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
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    print(head);
    reverse2(head);
    return 0;
}