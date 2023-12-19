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
    for(i=0;i<n;i++){
        for(j=0;j<(n-1-i);j++){
            if(arr[j+1]<arr[j]){
                 int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
            }
        }
    }
    cout<<"sorted array"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}