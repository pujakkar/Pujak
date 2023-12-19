#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
class Queue{
    public:
    node* front;
    node* back;
    Queue(){
        front=NULL;
        back=NULL;
    }
    void push(int x){
        node* n=new node(x);
        if(front==NULL){
            front=n;
            back=n;
        }
        back->next=n;
        back=n;
    }
    void pop(){
        node* todelete= front;
        if(front==NULL){
            cout<<"no element";
            return;
        }
        front=front->next;
        delete todelete;
    }
    int peek(){
        if(front==NULL){
            return -1;
        }
        return front->data;
    }
    bool isempty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};
int32_t main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    cout<<q.isempty();
    return 0;
}