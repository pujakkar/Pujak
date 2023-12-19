#include<iostream>
using namespace std;
void DtoB(int n){
    int c,r;
    c=n;
    while(c>0){
        r=c%2;
        cout<<r;
        c=c/2;
    }
}
int main(){
    int n;
    cout<<"enter the decimal digit:";
    cin>>n;
    cout<<"equivalent binary number is:";
    DtoB(n);
    return 0;
}