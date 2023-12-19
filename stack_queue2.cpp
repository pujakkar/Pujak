#include<bits/stdc++.h>
using namespace std;
class Queue{
    stack<int> st;
    public:
    void push(int x){
        st.push(x);
    }
    int pop(){
        if(st.empty()){
            return -1;
        }
        if(st.size()==1){
            int val= st.top();
            st.pop();
            return val;
        }
        int top=st.top();
        st.pop();
        int item= pop();
        st.push(top);
        return item;
    }
    bool isempty(){
        if(st.empty()){
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
    cout<<q.pop()<<endl;
    q.push(4);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}
