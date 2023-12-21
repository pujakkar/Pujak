#include<bits/stdc++.h>
using namespace std;
bool isThere(int key, vector<int> arr){
    bool ans=false;
    sort(arr.begin(), arr.end());
    for(int i=0;i<arr.size()-2;i++){
        int j=i+1;
        int k=arr.size()-1;
        while( j<k){
            if(arr[j]+arr[k]<(key-arr[i])){
                j++;
            }
            else if(arr[j]+arr[k]>(key-arr[i])){
                k--;
            }
            else if(arr[j]+arr[k]==(key-arr[i])){
                ans=true;
                break;
            }
        }
    }
    return ans;
}
int32_t main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<isThere(key,arr);
    return 0;
}