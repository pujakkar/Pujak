#include<bits/stdc++.h>
using namespace std;
#define n 100
class Queue{
    int* arr;
    int front;
    int back;
    public:
    Queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"queue overflow";
            return;
        }
        back++;
        arr[back]=x;
        if(front ==-1){
            front++;
        }
    }
    void pop(){
        if((back==-1 && front==-1) || front>back){
            cout<<"no element in queue";
            return;
        }
        front++;
        if(front>back){
            front=-1;
            back=-1;
        }
    }
    int peek(){
        if((back==-1 && front==-1) || front>back){
            cout<<"no element in queue";
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if((back==-1 && front==-1) || front>back){
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
    cout<<q.peek();
    return 0;
}