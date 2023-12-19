#include<iostream>
using namespace std;
void pythagorus(int a, int b, int c){
    int max,n1,n2;
    if(a>b){
        if(a>c){
            max=a;
            n1=b;
            n2=c;
        }
        else if(c>a){
            max=c;
            n1=b;
            n2=a;
        }
    }
    else if(b>a){
        if(b>c){
            max=b;
            n1=a;
            n2=c;
        }
        else if(c>b){
            max=c;
            n1=a;
            n2=b;
        }
    }
    int n;
    n=(n1*n1) + (n2*n2);
    if(n==(max*max)){
        cout<<"pythagorus triplet"<<endl;
    }
    else{
        cout<<"not pythagorus triplet"<<endl;
    }
}
int main(){
    int n1,n2,n3;
    cout<<"enter any three numbers:"<<endl;
    cin>>n1>>n2>>n3;
    pythagorus(n1,n2,n3);
    return 0;
}