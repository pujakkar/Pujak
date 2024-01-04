#include<bits/stdc++.h>  //search an element in a rotated array
using namespace std;
bool findPivotAndisThere(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<end){   //find pivot
        int mid=(start+end)/2;
        if(arr[mid]>arr[0]){
            start=mid+1;
        }
        else if(arr[mid]<arr[mid-1]){
            ans=mid;
            end=mid;
        }
        else if(arr[mid]<arr[0]){
            end=mid;
        }
    }
    if(arr[ans]<=target && target>=arr[0]){  //find the actual array part wherf the element could be
        int start2=0;
        int end2=ans-1;
        while(start2<=end2){
            int mid=(start2+end2)/2;
            if(target>arr[mid]){
                start2=mid+1;
            }
            else if(target<arr[mid]){
                end2=mid-1;
            }
            else {
                return true;
            }
        }
    }
    if(arr[ans]<=target && target<=arr[n-1]){
        int start2=ans+1;
        int end2=n-1;
        while(start2<=end2){
            int mid=(start2+end2)/2;
            if(target>arr[mid]){
                start2=mid+1;
            }
            else if(target<arr[mid]){
                end2=mid;
            }
            else{
                return true;
            }
        }
    }
    return false;
}
int32_t main(){
    int arr[]={7,9,1,2,3};
    if(findPivotAndisThere(arr,5,2)){
        cout<<"target is there ";
    }
    else{
        cout<<"target is not there";
    }
    return 0;
}