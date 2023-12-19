#include<bits/stdc++.h>   //maximum of sums of subarray ----Kadane's algorithm approach
using namespace std;
int32_t main(){
    int n,i, arr[100];
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr=0;
    int max1=INT_MIN;
    for(i=0;i<n;i++){
        curr=curr+arr[i];
        if(curr<0){
            curr=0;
        }
        max1=max(max1 , curr);
    }
    cout<<"maximum is:";
    cout<<max1;
    return 0;
}