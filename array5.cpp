#include<bits/stdc++.h>  //palindrome or not
using namespace std;
int32_t main(){
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    cout<<"enter char array"<<endl;
    char arr[n+1];
    cin>>arr;
    bool check=1;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check=0;
            break;
        }
    }
    if(check==0){
        cout<<"not a palindrome"<<endl;
    }
    else{
        cout<<"palindrome"<<endl;
    }
    return 0;
}