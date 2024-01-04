#include<bits/stdc++.h> //find peak elememt in an mountain array using bs
using namespace std;
int findPeak(int arr[],int n){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<end){
        int mid=(start+end)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            ans=mid;
            end=mid;
        } 
        else if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            end=mid-1;
        }
    }
    return arr[ans];
}
int32_t main(){
    int arr[]={3,4,5,1};
    cout<<findPeak(arr,4);
    return 0;
}