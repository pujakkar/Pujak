#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    vector<int> arr={1,1,1,0,0,0,1,1,1,1,0};
    int k;
    cout<<"enter they k value"<<endl;
    cin>>k;
    int zerocount=0;
    int ans=0;
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            zerocount++;
        }
        while(zerocount>k){
            if(arr[j]==0){
                zerocount--;
            }
            j++;
        }
        ans=max(ans,i-j+1);
    }
    cout<<ans;
    return 0;
}