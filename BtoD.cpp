#include<iostream>
#include<cmath>
using namespace std;
int BtoD(int d, int n){
    int i,c,r,s=0;
    c=n;
    for(i=0;i<d;i++){
        r=c%10;
        s=s+ r* pow(2,i);
        c=c/10;
    }
    return s;
}
int main(){
    int d,n;
    cout<<"enter the number of digits:"<<endl;
    cin>>d;
    cout<<"enter the digit:";
    cin>>n;
    cout<<"equivalent decimal of given binary number is:";
    int ans;
    ans=BtoD(d,n);
    cout<<ans;
    return 0;
}