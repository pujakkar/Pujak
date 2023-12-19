#include<bits/stdc++.h>          //maximum circular subarray sum
using namespace std;
int32_t main(){
    int arr[100],n, max2=INT_MIN , max1=-1000;
    cout<<"enter number of elements";
    cin>>n;
    cout<<"enter elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr=0 , curr1=0 , curr2=0;
    if(arr[0]<0 || arr[n-1]<0){
    for(int i=0;i<n;i++){
        curr=curr+arr[i];
        if(curr<0){
            curr=0;
        }
        max2=max(max2 , curr);
    }
    cout<<"overall sum"<<" "<<max2<<endl;
    }
    else if(arr[0]>0 && arr[n-1]>0){
        for(int i=0;i<n;i++){
            curr2=curr2 + arr[i];
        }
        for(int i=0;i<n;i++){
            arr[i]= -arr[i];
        }
        for(int i=0;i<n;i++){
           curr1=curr1+arr[i];
           if(curr1<0){
            curr1=0;
           } 
           max1=max(max1,curr1);
        }
        cout<<"overall sum"<<" "<<max1+curr2;
    }
    return 0;
}