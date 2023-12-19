#include<bits/stdc++.h>  //search a particular element
using namespace std;
int32_t main(){
    int r,c,i,j,arr[100][100];
    cout<<"enter number of rows:";
    cin>>r;
    cout<<"enter number of colums:";
    cin>>c;
    cout<<"enter elements of array:"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int k;
    cout<<"enter the desired number:";
    cin>>k;
    i=0,j=c-1;
    while(i<r && j>=0){
        if(arr[i][j]==k){
            cout<<"1";
            break;
        }
        else if(arr[i][j]>k){
            j--;
        }
        else if(arr[i][j]<k){
            i++;
        }
    }
    if(i>=r || j<0){
        cout<<"0";
    } 
    return 0;
}    