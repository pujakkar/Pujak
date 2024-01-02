#include<bits/stdc++.h> //maximize minimum distance
using namespace std;
bool isFeasible(int arr[],int n,int k,int mid){
    int pos=arr[0];
    int elements=1;
    for(int i=0;i<n;i++){
        if(arr[i]-pos>=mid){
            pos=arr[i];
            elements++;
            if(elements==k){
                return true;
            }
        }
    }
    return false;
}
int largestDistance(int arr[],int n,int k){
    sort(arr,arr+n);
    int left=arr[0];
    int right=arr[n-1];
    int result=-1;
    while(left<right){
        int mid=(left+right)/2;
        if(isFeasible(arr,n,k,mid)){
            result=max(result,mid);
            left=mid+1; //right half of array
        }
        else{
            right=mid-1;  //left half of array
        }
    }
    return result;
}
int32_t main(){
    int arr[]={3,4,5,7,11,12};
    cout<<largestDistance(arr,6,3);
    return 0;
}