#include<bits/stdc++.h>
using namespace std;
string DtoH( int n){
    int c,r;
    string s="";
    c=n;
    while(c>0){
        r=c%16;
        if(r<=9){
            s=s+ to_string(r); //to_string() converts int to string
        }
        else{
            char p= 'A' +r -10;
            s.push_back(p);
        }
        c=c%16;
    }
    return s;          
}
int32_t main(){
    int n;
    cout<<"enter decimal number:";
    cin>>n;
    cout<<"equivalent hexadecimal number is:";
    cout<<DtoH(n);
    return 0;
}