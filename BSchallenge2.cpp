#include<bits/stdc++.h>  //page allocation problem
using namespace std;
bool isPossible(int arr[],int n,int m,int mid){
    int reqStudents=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]+sum<=mid){
            sum+=arr[i];  //represents the number of pages allocated to the existing student
        }
        else{
            reqStudents++;
            if(reqStudents>m || arr[i]>mid){
                return false;
            }
            sum=arr[i];
        }
    }
    return true;
}
int maxPages(int arr[],int n,int m){{
    if(n<m){
        return -1;
    }
    int start=0;
    int end;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    end=sum;
    while(start<=end){
        int mid=(start+end)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1; //we want minimum ans that's why we want to optimize the solution in the minumum search space
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}}
int32_t main(){
    int arr[]={12,34,67,90};
    int students=2;
    cout<<maxPages(arr,4,students);
    return 0;
}