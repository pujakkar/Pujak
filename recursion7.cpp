#include<bits/stdc++.h>
using namespace std;
string move(string s){
    int l=s.size();
    if(s.size()==0){
        return "";
    }
    char ch=s[0];
    string ans=move(s.substr(1));
    if(ch=='x'){
        return (ans+ch);
    }
    return (ch+ans);
}
int32_t main(){
    string s;
    cout<<"enter a string:";
    cin>>s;
    cout<<move(s);
    return 0;
}