#include<bits/stdc++.h>   //maximum word
using namespace std;
int32_t main(){
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cout<<"enter elements of array:";
    cin.getline(arr,n);
    cin.ignore();
    int currl=0,maxl=0;
    int i=0;
    int st=0, maxst=0;
    for(i=0;i<=n;i++){
        if((arr[i]==' ') ||( arr[i]=='\0')){
            if(currl>maxl){
                maxl=currl;
                maxst=st;
            }
            currl=0;
            st=i+1;
        }
        else{
            currl++;
        }
        if(arr[i] =='\0'){
            break;
        }
    }
    cout<<"maximum length is"<<" "<<maxl<<endl;
    for(i=0;i<maxl;i++){
        cout<<arr[i+maxst];
    }
    return 0;
}