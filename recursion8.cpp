#include<bits/stdc++.h>    //substring
using namespace std;
void subs(string s, string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subs(ros,ans);               //not adding
    subs(ros,ch+ans);            //adding
}
int32_t main(){
    string s;
    cout<<"enter the string:";
    cin>>s;
    cout<<"sub strings are:";
    subs(s,"");
    return 0;
}