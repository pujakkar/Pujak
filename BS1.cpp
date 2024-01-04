#include<bits/stdc++.h>  //leftmost and rightmost occurance of an element in array using bs
using namespace std;
int leftmostOccur(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int rightmostOccur(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int32_t main(){
    int arr[]={1,2,3,3,5};
    cout<<leftmostOccur(arr,5,3)<<endl;
    cout<<rightmostOccur(arr,5,3)<<endl;
    cout<<"number of occurance="<<(rightmostOccur(arr,5,3)-leftmostOccur(arr,5,3))+1;
    return 0;
}