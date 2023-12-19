#include<bits/stdc++.h>   //record breaking
using namespace std;
int32_t main(){
    int arr[100],n,i;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements of array:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(i=0;i<n;i++){
        if((arr[i+1]>max) && (arr[i+1]>arr[i+2])){
            cout<<"record breaking day:";
            cout<<i+2<<endl;
            max=arr[i+1];
        }
        else if(i==0 && max>arr[i+1]){
            cout<<"record breaking day:";
            cout<<i+1<<endl;
            max=arr[i];
        }
    }
    return 0;
}