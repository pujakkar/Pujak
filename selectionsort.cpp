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
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            int temp;
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"sorted array"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}