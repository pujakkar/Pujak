#include<bits/stdc++.h>   //printing n natural numbers
using namespace std;
void print(int n){    //decreasing
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-1);
}
void print1(int n){   //increasing order
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;
}
int32_t main(){
    int n;
    cout<<"enter the range:";
    cin>>n;
    cout<<" real numbers till the given range are:"<<endl;
    cout<<"decreasing order"<<endl;
    print(n);
    cout<<"increasing order"<<endl;
    print1(n);
    return 0;
}