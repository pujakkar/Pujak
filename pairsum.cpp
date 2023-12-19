#include<bits/stdc++.h>   
using namespace std;
bool pairsum(int arr[] , int n, int s){
    int i , j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int l=0,h=n-1;
    while(l<n && h>0){
        if(arr[l]+arr[h]==s){
            return true;
        }
        else if(arr[l]+arr[h]<s){
            l++;
        }
        else if(arr[l]+arr[h]>s){
            h--;
        }
        else if(l==h){
            return false;
        }
    }
}
int32_t main(){
    int n,s,i, arr[100];
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements:";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the desired sum:";
    cin>>s;
    cout<<pairsum( arr,n,s)<<endl;
    return 0;
}