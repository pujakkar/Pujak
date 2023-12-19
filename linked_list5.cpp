#include<bits/stdc++.h>        //append k nodes
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
int length(node* &head){            //length of the linked list
    int count=1;
    node* temp=head;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
node* appendk(node* head,int k){
    node* newtail;
    node* newhead;
    node* tail=head;
    int count=1;
    while(tail->next!=NULL){
        if(count==k){
            newtail=tail;
        }
        if(count==k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
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
    insertatTail(head,5);
    insertatTail(head,6);
    print(head);
    cout<<endl;
    node* newhead=appendk(head,3);
    print(newhead);
    return 0;
}