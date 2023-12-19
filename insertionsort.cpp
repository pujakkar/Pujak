#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int n,i,j,arr[100];
    cout<<"enter the range:";
    cin>>n;
    cout<<"enter elements";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=1;i<n;i++){
        int curr=arr[i];
        for(j=i-1;j>=0;j--){
            if(arr[j]>curr){
                curr=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=curr;
            }
        }
    }
    cout<<"sorted array"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}