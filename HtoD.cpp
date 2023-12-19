#include<bits/stdc++.h>
using namespace std;
int HtoD(string n){
    int s,i,a=0;
    s=n.size();
    for(i=0;i<=(s-1);i++){
        if(n[i]>='0' && n[i]<='9'){
           a=a+(n[i]-'0') * pow(16,((s-1-i))); 
        }
        else if(n[i]>='A' && n[i]<='F'){
            a=a+(n[i]-'A'+10)* pow(16,((s-1-i)));
        }
    }
    return a;
}
int32_t main(){
    string n;
    cout<<"enter the hexadecimal number:";
    cin>>n;
    cout<<"equivalent decimal number is:";
    cout<<HtoD(n);
    cin>>n;
}
