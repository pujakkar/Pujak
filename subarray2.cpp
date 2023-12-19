#include<bits/stdc++.h>  //length of maximum arithmatic subarray
using namespace std;
int32_t main(){
    int arr[100],n,i;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements of array:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int d=arr[1]-arr[0],curr=2,ans=2;
    for(i=2;i<n;i++){
        if(d==arr[i]-arr[i-1]){
            curr++;
        }
        else{
            d=arr[i]-arr[i-1];
            curr=2;
        }
        ans= max(ans,curr);
    }
    cout<<ans<<endl;
}