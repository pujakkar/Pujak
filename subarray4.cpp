#include<bits/stdc++.h>   //maximum of sums of subarray ----cumulative sum approach
using namespace std;
int32_t main(){
    int n,i,j, arr[100];
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements:";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=0;
    int s[100];
    for(i=0;i<n;i++){
        int sum=0;
        for(j=i;j<n;j++){
            sum=sum+arr[j];
            s[k]=sum;
            k++;
        }
    }
    int s1;
    s1=k;
    cout<<"sums of elements of sub arrays:"<<endl;
    for(i=0;i<s1;i++){
        cout<<s[i]<<endl;
    }
    int max1=s[0];
    for(i=0;i<s1;i++){
        if(s[i]> max1){
            max1=s[i];
        }
    }
    cout<<"maximum of sums is:";
    cout<<max1;
    return 0; 
}