#include<bits/stdc++.h>         //intersection of 2 linkee list
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
int length(node* &head){           
    int count=1;
    node* temp=head;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void intersect(node* head1,node* head2,int pos){
    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }    
    temp2->next=temp1;
}
int findIntersect(node* &head1 , node* &head2){
    int l1=length(head1);
    int l2=length(head2);
    int commonLength=max(l1,l2)-min(l1,l2);
    int count=1;
    node* ptr1=head1;
    node* ptr2=head2;
    while(ptr1->next !=NULL && count<commonLength){
        ptr1=ptr1->next;
        count++;
    }
    int count1=1;
    while(ptr1->next!=NULL && ptr2->next!= NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        count++;
        if(ptr1->next==ptr2->next){
            return count+commonLength+1;
        }
    }
    return -1;
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
    node* head1=NULL;
    node* head2=NULL;
    insertatTail(head1,1);
    insertatTail(head1,2);
    insertatTail(head1,3);
    insertatTail(head1,4);
    insertatTail(head1,5);
    insertatTail(head1,6);
    insertatTail(head2,9);
    insertatTail(head2,10);
    intersect(head1,head2,3);
    print(head1);
    cout<<endl;
    print(head2);
    cout<<endl;
    cout<<findIntersect(head1,head2);    
    return 0;
}