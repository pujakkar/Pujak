#include<bits/stdc++.h>
using namespace std;
int prefixEval(string s){
    stack<int> st;
    int l=s.length();
    for(int i=l-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            case '/':
                st.push(op1/op2);
                break; 
            case '*':
                st.push(op1*op2);
                break;                                           
            }
        }
    }
    return st.top();
}
int32_t main(){
    string s="-+7*45+20";
    cout<<prefixEval("-+7*45+20");
    cout<<"fuck";
    return 0;
}