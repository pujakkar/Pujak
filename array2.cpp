#include<bits/stdc++.h>   //minimum index of duplicate elements considering O(n)
using namespace std;
int32_t main(){
    int arr[100],idx[100],n,i;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements of array:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<100;i++){
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for(i=0;i<n;i++){
        if(idx[arr[i]]==-1){
            idx[arr[i]]=i;
        }
        else{
            minidx= min(minidx, idx[arr[i]]);
        }
    }
    if(minidx==INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<minidx+1;
    }
    return 0;
}