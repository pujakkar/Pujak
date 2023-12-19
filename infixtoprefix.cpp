#include<bits/stdc++.h>    //in case of infix to
using namespace std;        //prefix ,reverse the
int prec(char s){           //string before applyin   
        if(s=='^'){         //and after applying
        return 3;           //but reverse the case
    }                       //of op and cl bracketll
    if(s=='*' || s=='/'){
        return 2;
    }
    if(s=='+' || s=='-'){
        return 1;
    }
    return -1;
}
string intopre(string s){
    stack<char> st;
    string res;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if((s[i]>='a' && s[i]<='z' )|| (s[i]>='A' && s[i]<='Z')){
            res+=s[i];
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(s[i])<=prec(st.top())){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}
int32_t main(){
    cout<<intopre("(a-b/c)*(a/k-l)");
    return 0;
}