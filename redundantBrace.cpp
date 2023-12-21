#include<bits/stdc++.h>
using namespace std;
bool redundant(string s){
    bool ans=false;
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                ans=true;
            }
            while(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'){
                st.pop();
            }
        }
    }
    return ans;

}
int32_t main(){
    string s;
    cin>>s;
    cout<<redundant(s);
    return 0;
}