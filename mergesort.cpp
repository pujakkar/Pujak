#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int s, int e, int mid){
    int n1=mid-s+1;
    int a[n1];
    int n2=e-mid;
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[s+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=s;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++; k++;
    }
}
void mergesort(int arr[], int s, int e){
    if(s<e){
        int mid;
        mid = (s+e)/2;
    
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e,mid);
    }
}
int32_t main(){
    int n ;
    int arr[100];
    cout<<"enter the range";
    cin>>n;
    cout<<"enter elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}