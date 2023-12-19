#include<bits/stdc++.h>
using namespace std;
bool isvalid(string s){
    stack<char> st;
    bool ans=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(!st.empty() && ((s[i]==')' && st.top()=='(')|| (s[i]=='}' && st.top()=='{')|| (s[i]==']' &&st.top()=='['))){
                st.pop();
            }
            else{
                ans= false;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return ans;
}
int32_t main(){
    string s="({[]})";
    if(isvalid(s)){
        cout<<"valid string";
    }
    else{
        cout<<"invalid string";
    }
    return 0;
}
