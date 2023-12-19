#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"enter the range";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=i;j<5;j++){
            cout<<" ";
        }
            for(k=1;k<=5;k++){
                cout<<"* ";
            }
        cout<<endl;
    }
    return 0;
}