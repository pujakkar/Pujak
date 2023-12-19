#include<bits/stdc++.h>
using namespace std;
#define n 100
class stak{
    int* arr;
    int top;
    public:
    stak(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
        cout<<"stack is overflowed"<<endl;
        return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
        cout<<"no elements to pop"<<endl;
        return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
        cout<<"no elements in stack"<<endl;
        return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int32_t main(){
    stak st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    return 0;
}