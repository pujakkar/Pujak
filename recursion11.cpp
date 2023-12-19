#include<bits/stdc++.h>     //possible path from starting to ending in a gameboard
using namespace std;
int countpath(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<6;i++){
        count =count +countpath(s+i,e);
    }
    return count;
}
int32_t main(){
    int s,e;
    cout<<"enter the starting and ending point"<<endl;
    cin>>s;
    cin>>e;
    cout<<"the number of path is"<<" "<<countpath(s,e);
    return 0;
}