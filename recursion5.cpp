#include<bits/stdc++.h>   //replace pi with 3.14
using namespace std;
void subs(string s){
    int l=s.size();
    if(l==0){
        return;
    }
    if(s[0]=='p'&& s[1]=='i'){
        cout<<"3.14";
        subs(s.substr(2));
    }
    else{
        cout<<s[0];
        subs(s.substr(1));
    }
}
int32_t main(){
    string s;
    cout<<"enter the string:";
    cin>>s;
    subs(s);
    return 0;
}