#include<bits/stdc++.h>
using namespace std;
void insertatbottom(stack<int> &st , int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int top=st.top();
    st.pop();
    insertatbottom(st,x);
    st.push(top);
}
int32_t main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.size()<<endl;
    insertatbottom(st,4);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<st.size();
    return 0;
}