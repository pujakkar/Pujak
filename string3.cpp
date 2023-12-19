#include<bits/stdc++.h>   
using namespace std;
int32_t main(){
    string s;
    cout<<"enter a string:";
    cin>>s;
    int l=s.size();
    int n=100000;
    char arr[n];
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<l;i++){
        arr[s[i]]++;
    }
    int max=arr[0];
    char maxidx;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxidx = (char) i;
        }
    }
    cout<<"maximum frequency :"<<max<<endl;
    cout<<"corresponding character:"<<maxidx;
    return 0;
}