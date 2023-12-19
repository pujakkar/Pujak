#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int n;
    cout<<"enter the range";
    cin>>n;
    int a,b;
    cout<<"enter divisors:";
    cin>>a>>b;
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    cout<<"total numbers which are divisible by both :";
    cout<<(c1+c2)-c3;
}