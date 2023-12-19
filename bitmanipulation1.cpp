#include<bits/stdc++.h>   //finding two unique numbers
using namespace std;
void xorsum(int arr[], int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum ^ arr[i];
    }
    int setbit=0;
    int pos=0;
    int xorsum2=xorsum;
    while(setbit!=1){
        setbit= xorsum2 & 1;
        pos++;
        xorsum2 =xorsum2 >>1;
    }
    int xorsum1=0;
    for(int i=0;i<n;i++){
        if((arr[i] &( 1<<pos-1))!=0){
            xorsum1=xorsum1^ arr[i];
        }
    }
    cout<<xorsum1<<",";
    int digit2;
    digit2 = xorsum1^xorsum;
    cout<<digit2<<endl;
}
int32_t main(){
    int n;
    cout<<"enter number of elements :";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"two unique digits are:";
    xorsum(arr,n);
}