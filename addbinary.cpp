#include<bits/stdc++.h>
using namespace std;
int reverse(int a){
    int r,s=0;
    while(a>0){
        r=a%10;
        s=s*10 + r;
        a=a/10;
    }
    return s;
}
int addbinary(int a, int b){
    int s=0,prev=0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            if(prev==0){
                s=s*10 + 0;
                prev=0;
            }
            else if(prev==1){
                s=s*10 + 1;
                prev=0;
            }
        }
        else if((a%2==0 && b%2==1)||(a%2==1 && b%2==0)){
            if(prev==0){
                s=s*10 + 1;
                prev=0;
            }
            else if(prev==1){
                s=s*10+0;
                prev=1;
            }
        }
        else if(a%2==1 && b%2==1){
            if(prev==0){
                s=s*10 + 0;
                prev=1;
            }
            else if(prev==1){
                s=s*10 + 1;
                prev=1;
            }
        }
        a=a/10;
        b=b/10;
    }
    while(a>0){
        if(a%2==1){
            if(prev==0){
                s=s*10 + 1;
                prev=0;
            }
            else if(prev==1){
                s=s*10 + 0;
                prev=1;
            }
        }
        else if(a%2==0){
            if(prev==0){
                s=s*10 + 0;
                prev=0;
            }
            else if(prev==1){
                s=s*10 + 1;
                prev=0;
            }
        }
        a=a/10;
    }
     while(b>0){
        if(b%2==1){
            if(prev==0){
                s=s*10 + 1;
                prev=0;
            }
            else if(prev==1){
                s=s*10 + 0;
                prev=1;
            }
        }
        else if(b%2==0){
            if(prev==0){
                s=s*10 + 0;
                prev=0;
            }
            else if(prev==1){
                s=s*10 + 1;
                prev=0;
            }
        }
        b=b/10;
    }
    if(prev==0){
        s=s*10 + 0;
    }
    else if(prev==1){
        s=s*10 +1;
    }
    return reverse(s);
}
int32_t main(){
    int a,b;
    cout<<"enter two binary numbers:"<<endl;
    cin>>a>>b;
    cout<<"addition of two binary numbers:";
    cout<<addbinary(a,b);
    return 0;
}
