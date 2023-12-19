#include<bits/stdc++.h>    //finding a subarray to add up to a given sum  
using namespace std;
int32_t main(){
    int arr[100],sum=0,s,n;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the given sum:";
    cin>>s;
    int i=0, j=0,st=-1,en=-1;
    while(j<n && sum+arr[j]<=s){        //after this portion the sum might be greater or equal to the given sum
        sum=sum+arr[j];
        j++;                                 
    }                                    //
    if(sum==s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n){                         //now if the sum is greater than the given sum the starting pointer is getting moved ahead
        sum=sum+arr[j];
        while(sum>s){
            sum=sum-arr[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
    return 0;
}