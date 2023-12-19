#include<bits/stdc++.h>   //reverse string
using namespace std;
void reverse(string s){
    if(s.size()==0){
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}
int32_t main(){
    string s;
    cout<<"enter the string:";
    cin>>s;
    cout<<"reverse string is:";
    reverse(s);
    return 0;
}