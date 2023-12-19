#include<bits/stdc++.h>           //floyd's algorithm
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
void makecycle(node* &head, int pos){   //making cycle
    node* temp=head;
    node* startnode;
    int count=1;
    while(temp->next!=NULL){
        if(pos==count){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}
bool detectcycle(node* &head){      //detecting cycle
    node* fastptr=head;
    node* slowptr=head;
    while(fastptr->next!=NULL && fastptr->next->next!=NULL){
        fastptr=fastptr->next->next;
        slowptr=slowptr->next;
        if(fastptr==slowptr){
            return true;
        }
    }
    return false;
}
void removecycle(node* &head){      //removing cycle
    node* fastptr=head;
    node* slowptr=head;
    do
    {
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
    }while(fastptr!=slowptr);
    fastptr=head;
    while(fastptr->next != slowptr->next){
        slowptr=slowptr->next;
        fastptr=fastptr->next;
    }
    slowptr->next=NULL;
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
    int pos=3;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatTail(head,5);
    insertatTail(head,6);
    //print(head);
    makecycle(head,pos);
    //cout<<endl;
    cout<<detectcycle(head)<<endl;
    removecycle(head);
    cout<<detectcycle(head)<<endl;
    print(head);
    return 0;
}