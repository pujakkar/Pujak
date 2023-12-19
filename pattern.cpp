#include<iostream>
using namespace std;
int main(){
    int a,b,i,j,k;
    cout<<"enter number of rows and columns";
    cin>>a>>b;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            if(i==1 || i==a){
               cout<<"*";
            }
            else{
                cout<<"*";
               for(j=2;j<b;j++){
                   cout<<" ";
               }
               cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}