#include<bits/stdc++.h>   //smallest +ve number missing from an array
using namespace std;
int32_t main(){
    int n,i, arr[100];
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements:";
    for( i=0;i<n;i++){
        cin>>arr[i];
    } 
    bool check[100];
    for( i=0;i<100;i++){
        check[i]=0;
    }
    for( i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]]=1;
        }
    }
    int ans=-1;
    for( i=0;i<100;i++){
        if(check[i]==0){
            ans=i;
            break;
        }
    }
    cout<<"minimum missing +ve integer is:";
    cout<<ans<<endl;
    return 0;
}