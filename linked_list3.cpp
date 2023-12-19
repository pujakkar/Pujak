#include<bits/stdc++.h>         //reverse k nodes
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
node* reversek(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
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
    int k=2;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    print(head);
    node* newHead= reversek(head,2);
    cout<<endl;
    print(newHead);
    return 0;
}