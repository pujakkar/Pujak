#include<bits/stdc++.h>   //sorting
using namespace std;
int32_t main(){
    string s;
    cout<<"enter a string:";
    cin>>s;
    int l=s.size();
    int i;
    char max=s[0];
    for(i=0;i<l-1;i++){
        for(int j=i+1;j<l;j++){
            if(s[i]<s[j]){
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    cout<<"remodelled string is:";
    cout<<s;
    return 0;    
}