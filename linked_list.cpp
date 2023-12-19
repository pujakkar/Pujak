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
bool search(node* head,int key){    //searching for a particular key
    node* temp= head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteatHead(node*&head){     //deletion
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteatHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data != val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
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
    insertatTail(head,4);
    insertatHead(head,3);
    print(head);
    cout<<endl<<search(head,5);
    cout<<endl;
    deletion(head,1);
    deleteatHead(head);
    print(head);
    return 0;
}