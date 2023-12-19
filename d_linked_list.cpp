#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node*prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertatHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!= NULL){
        head->prev=n;
    }
    head=n;
}
void insertatTail(node* &head, int val){
    if(head==NULL){
        insertatHead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void deleteatHead(node* &head){
    if(head==NULL){
        return;
    }
    node* todelete=head;
    head=head->next;
    head->next->prev=NULL;
    delete todelete;
}
void deletion(node* &head,int pos){
    if(pos==1){
        deleteatHead(head);
        return;
    }
    node*temp=head;
    int count=1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    node* todelete=temp;
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    delete todelete;
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
    insertatHead(head,5);
    print(head);
    deletion(head,5);
    cout<<endl;
    print(head);
    return 0;
}