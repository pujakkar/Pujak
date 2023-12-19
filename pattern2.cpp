#include<iostream>
using namespace std;
int main(){
    int n,a=1,i,j;
    cout<<"enter the range";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<a<<"  ";
            a++;
        }
        cout<<endl;
    }
}