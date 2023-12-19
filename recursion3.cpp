#include<bits/stdc++.h>   //first occurance and last occurance of a number
using namespace std;
int firstoccur(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstoccur(arr, n, i+1, key);
}
int lastoccur(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int result=lastoccur(arr, n, i+1, key);
    if(result !=-1){
        return result;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int32_t main(){
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[100];
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"first occurance:"<<" "<<firstoccur(arr,n,0,2)<<endl;
    cout<<"last occurance:"<<" "<<lastoccur(arr,n,0,2);
    return 0;}