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
    cout<<"maximum in every iteration :"<<endl;
    int max=INT_MIN;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(arr[j]>max){
                max=arr[j];
            }
        }
        cout<<max<<" ";
    }
    return 0;
}
