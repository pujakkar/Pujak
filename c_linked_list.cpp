#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertatHead(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void insertatTail(node* &head,int val){
    if(head==NULL){
        insertatHead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
int length(node* &head){
    node* temp=head;
    int count=1;
    while(temp->next!=head){
        temp=temp->next;
        count++;
    }
    return count;
}
void deleteatHead(node* &head){
    if(head->next==head){
        delete head;
        return;
    }
    node* temp=head;
    node* todelete=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* store=temp;
    store->next=head->next;
    head=head->next;
    delete todelete;
}
void deleteatTail(node* &head){
    node* temp=head;
    while(temp->next->next!=head){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=head;
    delete todelete;
}
void deletion(node* &head,int pos){
    if(pos==1){
        if(head==NULL){
            return;
        }
        deleteatHead(head);
        return;
    }
    if(pos==length(head)){
        deleteatTail(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp->next!=head && count<pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void print(node* &head){
    node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
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
    insertatHead(head,6);
    print(head);
    deletion(head,6);
    print(head);
    return 0;
}