#include<bits/stdc++.h>        //reduce an array so that minimum element gets replaced by 0 and so on
using namespace std;
bool compare(pair<int , int> p1, pair<int , int> p2){
    return p1.first<p2.first;
}
int32_t main(){
    int arr[]={10,16,7,14,5,3,2,9};
    vector<pair<int , int> > v;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }
    for(int i=0;i<v.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}