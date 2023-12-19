#include<bits/stdc++.h>  //whether the array is sorted or not
using namespace std;
bool sort(int arr[], int n){
    if(n==1){
        return true;
    }
    return (arr[0]<arr[1] && sort(arr+1 ,n-1));
}
int32_t main(){
    int arr[100],n;
    cout<<"enter number of elements :";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sort(arr,n);
    return 0;
}