#include<bits/stdc++.h>          //removing duplicate elements
using namespace std;
string remove(string s){
    if(s.size()==0){
        return "";
    }
    char ch=s[0];
    string ans=remove(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}
int32_t main(){
    string s;
    cout<<"enter the string:";
    cin>>s;
    cout<<"remodelled string:"<<endl;
    cout<<remove(s);
    return 0;
}