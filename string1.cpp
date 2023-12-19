#include<bits/stdc++.h>  //small case to upper case
using namespace std;
int32_t main(){
    string s;
    cout<<"enter a string:";
    cin>>s;
    int l=s.size();
    int i;
    for(i=0;i<l;i++){
        if(s[i]>=97 && s[i]<=122){
            s[i]=s[i]-32;
        }
    }
    cout<<s;
    return 0;
}