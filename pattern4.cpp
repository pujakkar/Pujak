#include<iostream>
using namespace std;
int factorial(int n){
    int f,f1;
    if(n==0){
        return 1;
    }
    f1=factorial(n-1);
    f=f1*n;
    return f;
}
void print(int n, int r){
    int ans;
    ans= factorial(n)/(factorial(r)*factorial(n-r));
    cout<<ans<<" ";
}
int main(){
    int n,i,j;
    cout<<"enter rows and columns:"<<endl;
    cin>>n;
    cout<<"pascal's triangle"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            print(i,j);
        }
        cout<<endl;
    }
    return 0;
}