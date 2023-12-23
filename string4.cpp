#include<bits/stdc++.h>  //longest substring without repeating character
using namespace std;
int32_t main(){
    string s;
    cin>>s;
    unordered_set<int> mySet;
    int i=0;
    int j=0;
    int ans=0;
    while(i<s.length() && j<s.length()){
        if(mySet.find(s[i])==mySet.end()){
            mySet.insert(s[i]);
            ans=max(ans,i-j+1);
            i++;
        }
        else{
            mySet.erase(s[j]);
            j++;
        }
    }
    cout<<ans;
    return 0;
}