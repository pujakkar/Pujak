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
    cout<<ans<<endl;
}
int main(){
    int n,r;
    cout<<"enter two numbers:";
    cin>>n>>r;
    print(n,r);
    return 0;
}