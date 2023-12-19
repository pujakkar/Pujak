#include<bits/stdc++.h>         //possible permutation of a string
using namespace std;
void permutation(string s, string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(s[i]==s[i+1]){
            continue;
        }
        string ros=s.substr(0,i)+ s.substr(i+1);
        permutation (ros, ans+ch);
    }
}
int32_t main(){
    string s;
    cout<<"enter a string"<<endl;
    cin>>s;
    permutation(s,"");
    return 0;
}