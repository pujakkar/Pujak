#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int arr[100],n,i,j;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements of array:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
       int s=0;
        for(j=i;j<n;j++){
            s=s+arr[j];
            cout<<s<<endl;
        }
    }
    return 0;
}    