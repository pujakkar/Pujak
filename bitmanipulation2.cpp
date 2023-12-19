#include<bits/stdc++.h>   // to finf unique number while repeated number is presented thrice 
using namespace std;
void unique(int arr[], int n){
    int check[100];
    for(int i=0;i<100;i++){
        check[i]=0;
    }
    int i;
    for(i=0;i<n;i++){
        for(int j=0;j<3;j++){
            if((arr[i] & (1<<j))!=0 ){
                check[j]++;
            }
        }
    }
    int ans=0;
    for(i=0;i<n;i++){
        if((check[i]%3)!=0){
            ans=(ans | (1<<i));
            cout<<ans<<endl;
            break;
        }
    }
}
int32_t main(){
    int n;
    cout<<"enter number elements:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"unique element is:";
    unique(arr,n);
    return 0;
}