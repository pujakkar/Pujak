#include<bits/stdc++.h>              //even nodes after odd nodes
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
void arrange(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next!=NULL){
        even->next=NULL;
    }
}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
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
    arrange(head);
    print(head);
    return 0;
}