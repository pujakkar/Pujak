#include<bits/stdc++.h> //painter's partition
using namespace std;
bool isPossible(int arr[],int n,int m,int mid){
    int reqPainter=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]+sum<=mid){
            sum+=arr[i];
        }
        else{
            reqPainter++;
            if(reqPainter>m || arr[i]>mid){
                return false;
            }
            sum=arr[i];
        }
    }
    return true;
}
int PainterPartition(int arr[],int n,int m){
    if(m>n){
        return -1;
    }
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int end=sum;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int32_t main(){
    int arr[]={5,5,5,5};
    cout<<PainterPartition(arr,4,2);
    return 0;
}