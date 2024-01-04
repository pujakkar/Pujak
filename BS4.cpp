#include<bits/stdc++.h>  //square root
using namespace std;
int squareRoot(int n){
    int start=0;
    int end=n;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if((mid*mid)<n){
            ans=mid;
            start=mid+1;
        }
        else if((mid*mid)>n){
            end=mid-1;
        }
        else if((mid*mid)==n){
            return mid;
        }
    }
    return ans;
}
double morePrecision(int n,int precision,int intSol){
    double factor=1;
    double ans=intSol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans; j*j<=n ;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int32_t main(){
    int intSol=squareRoot(27);
    cout<<morePrecision(27,5,intSol);
    return 0;
}