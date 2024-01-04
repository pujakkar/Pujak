#include<bits/stdc++.h>  //aggresive cows
using namespace std;
bool isPossible(int arr[],int n,int m,int mid){
    int firstPos=arr[0];
    int reqCow=1;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[0]>=mid){
            reqCow++;
        }
    }
    if(reqCow<m){
        return false;
    }
    else{
        return true;
    }
}
int aggresiveCows(int arr[],int n,int m){
    sort(arr,arr+n);
    if(m>n){
        return -1;
    }
    int ans=-1;
    int start=0;
    int maxarr=INT_MIN;
    int minarr=INT_MAX;
    for(int i=0;i<n;i++){
        maxarr=max(maxarr,arr[i]);
        minarr=min(minarr,arr[i]);
    }
    int end=maxarr-minarr;
    while(start<=end){
        int mid=(start+end)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int32_t main(){
    int arr[]={4,2,1,3,6};
    cout<<aggresiveCows(arr,5,2);
    return 0;
}