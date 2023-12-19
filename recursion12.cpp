#include<bits/stdc++.h>          //possible way to exit from a grid of n x n
using namespace std;
int countpath(int n,int i, int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>n || j>n){
        return 0;
    }
    return (countpath(n,i+1,j)+ countpath(n,i,j+1));
}
int32_t main(){
    int n;
    cout<<"enter number of grids"<<endl;
    cin>>n;
    cout<<"number of ways of escaping"<<endl;
    cout<<countpath(n,0,0);
    return 0;
}